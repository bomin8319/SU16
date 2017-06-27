#include <RcppArmadillo.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>

//[[Rcpp::depends(RcppArmadillo)]]
using std::log;
using std::exp;
using std::max;
using std::abs;
using std::sqrt;
using std::pow;

using namespace Rcpp; 

void R_init_markovchain(DllInfo* info) {
	R_registerRoutines(info, NULL, NULL, NULL, NULL);
	R_useDynamicSymbols(info, TRUE);	
}

// **********************************************************//
//                    Call rmultinom from R                  //
// **********************************************************//
// [[Rcpp::export]]
IntegerVector callRMultinom (NumericVector x) {
	int n = x.size();
	IntegerVector d(n);
	R::rmultinom(1, x.begin(), n, d.begin());
	return d;
}

// **********************************************************//
//                    Multinomial Sampler                    //
// **********************************************************//
// [[Rcpp::export]]
IntegerVector multinom_vec (int nSample, NumericVector props) {
	IntegerVector multinom_vec(nSample);
	NumericVector props_adj = props / sum(props);
	for (int i = 0; i < nSample; i++) {
		IntegerVector multinom_i = callRMultinom(props_adj);
		for (int j = 0; j < props.size(); j++) {
			if (multinom_i[j] == 1) {
				multinom_vec[i] = j + 1;
			  // add + 1 to work in R. If work in C++, delete +1.
			}
		}
	}
	return multinom_vec;
}

// **********************************************************//
//         Function to search for burn-in documents          //
// **********************************************************//
// [[Rcpp::export]]
int which_int(int value, IntegerVector x) {
	int n = x.size();
	for (int i = 0; i < n; i++) {
		if (x[i] >= value) {
			return i + 1;
		}
	}
	return 1;
}

// **********************************************************//
//       Function to search for cutoff point in History      //
// **********************************************************//
// [[Rcpp::export]]
int which_num(int value, NumericVector x) {
  int n = x.size();
  for (int i = 0; i < n; i++) {
    if (x[i] >= value) {
      return i;
    }
  }
  return 0;
}

// **********************************************************//
//        Multiple Draws from a Dirichlet Distribution       //
// **********************************************************//
// [[Rcpp::export]]
arma::mat rdirichlet_cpp(int num_samples, arma::vec alpha_m) {
	int dist_size = alpha_m.n_elem;
	arma::mat distribution = arma::zeros(num_samples, dist_size);
	
	for (int i = 0; i < num_samples; ++i) {
		double sum_term = Rcpp::as<double>(0);
		for (int j = 0; j < dist_size; ++j) {
			double cur = R::rgamma(alpha_m[j], 1.0);
			distribution(i, j) = cur;
			sum_term += cur;
		}
		for (int j = 0; j < dist_size; ++j) {
			distribution(i, j) = distribution(i, j) / sum_term;
		}
	}
	return(distribution);
}

// **********************************************************//
//       Matrix-based Draws from a Binomial Distribution     //
// **********************************************************//
// [[Rcpp::export]]
IntegerMatrix rbinom_mat(NumericMatrix probmat) {
	IntegerMatrix binmat(probmat.nrow(), probmat.ncol());
	for (int i = 0; i < probmat.nrow(); i++) {
		for (int j = 0; j < probmat.ncol(); j++) {
			NumericVector yesno = rbinom(1, 1, probmat(i, j));
			binmat(i, j) = yesno[0];
		}
	}
	return binmat;
}

// **********************************************************//
//              Construct the history of interaction         //
// **********************************************************//
// [[Rcpp::export]]
List History(List edge, NumericMatrix p_d, IntegerVector node, double Rcpp::as<double>(when)) {
  int nIP = p_d.ncol();
  List IPmat(nIP);
  for (int IP = 1; IP < (nIP + 1); IP++) {
  	List IPlist_IP(3);
  	for (int l = 0; l < 3; l++){
  		NumericMatrix IP_l(node.size(), node.size());
  		IPlist_IP[l] = IP_l;
  	}
  		IPmat[IP - 1] = IPlist_IP;
  }
  NumericVector timestamps(edge.size());
  for (int d = 0; d < edge.size(); d++) {
 	  List document = edge[d];
 	  timestamps[d] = document[2];
  }
  int iter = which_num(when, timestamps);
 
	if (iter > 0) {
	  for (int i = 0; i < iter; i++) {
	    List document2 = edge[i];
	    int sender = document2[0];
	    IntegerVector receiver = document2[1];
	    double time = Rcpp::as<double>(document2[2]);
	    double time1 = Rcpp::as<double>(when - 384;)
	  	double time2 = Rcpp::as<double>(when - 96);
		double time3 = Rcpp::as<double>(when - 24); 
	    for (int r = 0; r < receiver.size(); r++){
	       for (int IP = 0; IP < nIP; IP++) {
  			  List IPlist_IP = IPmat[IP];
  			  if (time >= time3) {
				    NumericMatrix IP_l = IPlist_IP[0];
				    IP_l(sender - 1, receiver[r] -1) += p_d(i, IP);
				    IPlist_IP[0] = IP_l;
			    }
  			  if (time >= time2 && time < time3) {
  				  NumericMatrix IP_l = IPlist_IP[1];
				    IP_l(sender - 1, receiver[r] -1) += p_d(i, IP);
				    IPlist_IP[1] = IP_l;
			    }  				
			    if (time >= time1 && time < time2) {
  			  	NumericMatrix IP_l = IPlist_IP[2];
				    IP_l(sender - 1, receiver[r] -1) += p_d(i, IP);
				    IPlist_IP[2] = IP_l;
			    } 		
			    IPmat[IP] = IPlist_IP;
  			}
	   }
	  }
  }
	return IPmat;
}

// **********************************************************//
//                  Calculate Degree statistics              //
// **********************************************************//
// [[Rcpp::export]]
List Degree(List history, IntegerVector node, int sender) {
  int nIP = history.size();
  List IPmat(nIP);
 
  for (int IP = 0; IP < nIP; IP++) {
  	 NumericMatrix degreemat_IP(node.size(), 6);
  	 List historyIP = history[IP];
     NumericVector degree(6); 
	 
   for (int b = 0; b < node.size(); b++) {
    int receiver = node[b];
    for (int l = 0; l < 3; l++) {
    	NumericMatrix historyIP_l = historyIP[l];
    double send = Rcpp::as<double>(historyIP_l(sender - 1, receiver - 1));
    	
   	NumericVector indegree(node.size());
    	for (int h = 0; h < node.size(); h++) {
     	 int third = node[h];
     	double htor = Rcpp::as<double>(historyIP_l(third - 1, receiver - 1));
    	 indegree[h] = htor;
     	}
    	degree[l + 3] = sum(indegree);			
    	degree[l] = degree[l] + send;
      }
    degreemat_IP(b,_) = degree;
    }
   for (int l2 = 0; l2 < 3; l2++) {
    degreemat_IP(_, l2) = rep(max(degreemat_IP(_,l2)), node.size());
   }
  IPmat[IP] = degreemat_IP;
  }
  return IPmat;
}

// **********************************************************//
//                  Calculate Dyadic statistics              //
// **********************************************************//
// [[Rcpp::export]]
List Dyadic(List history, IntegerVector node, int sender) {
  int nIP = history.size();
  List IPmat(nIP);  
  
  for (int IP = 0; IP < nIP; IP++) {
  	 NumericMatrix dyadicmat_IP(node.size(), 6);
  	 List historyIP = history[IP];
     NumericVector dyadic(6); 
     for (int b = 0; b < node.size(); b++) {
    	int receiver = node[b];
        for (int l = 0; l < 3; l++) {
    		NumericMatrix historyIP_l = historyIP[l];
    		dyadic[l] = historyIP_l(sender - 1, receiver - 1);
    		dyadic[l + 3] = historyIP_l(receiver - 1, sender - 1);
    	}
      dyadicmat_IP(b, _) = dyadic;
    }
    IPmat[IP] = dyadicmat_IP;
  } 
  return IPmat;
}  

// **********************************************************//
//          Calculate (full 3 x 3) Triadic statistic         //
// **********************************************************//
// [[Rcpp::export]]
List Triadic(List history, IntegerVector node, int sender) {
   int nIP = history.size();
   List IPmat(nIP);
   for (int IP = 0; IP < nIP; IP++) {
      NumericMatrix triadmat_IP(node.size(), 36);
  	  List historyIP = history[IP];
  	  NumericVector triadic(36); 
       
        for (int b = 0; b < node.size(); b++) {
        int receiver = node[b];
        NumericVector twosend(node.size());
        NumericVector tworeceive(node.size());
        NumericVector sibling(node.size());
        NumericVector cosibling(node.size()); 
        int iter = 0;
        for (int l = 0; l < 3; l++) {
          for (int m = 0; m < 3; m++){
            NumericMatrix historyIP_l = historyIP[l];
            NumericMatrix historyIP_m = historyIP[m];
       	    for (int h = 0; h < node.size(); h++) {
     	        int third = node[h];	
     	       double stoh = Rcpp::as<double>(historyIP_l(sender - 1, third - 1));
      	       double htos = Rcpp::as<double>(historyIP_l(third - 1, sender - 1)); 
     	       double rtoh = Rcpp::as<double>(historyIP_m(receiver - 1, third - 1));
      	       double htor = Rcpp::as<double>(historyIP_m(third - 1, receiver - 1)); 
      	        twosend[h] = stoh * htor;
      	        tworeceive[h] = htos * rtoh;
      	        sibling[h] = htos * htor;
      	        cosibling[h] = stoh * rtoh;
       	    }
       	    triadic[iter] = sum(twosend);
       	    triadic[iter + 9] = sum(tworeceive);
       	    triadic[iter + 18] = sum(sibling);
       	    triadic[iter + 27] = sum(cosibling);
            iter = iter + 1;
          }
        }
        triadmat_IP(b,_) = triadic;
      }
      IPmat[IP] = triadmat_IP;
    }
  return IPmat;
}

// **********************************************************//
//        Calculate (reduced to 3) Triadic statistic         //
// **********************************************************//
// [[Rcpp::export]]
List Triadic_reduced(List triadic) {
   int nIP = triadic.size();
   List IPmat(nIP);
   for (int IP = 0; IP < nIP; IP++) {
   	NumericMatrix historyIP = triadic[IP];
   	NumericMatrix triadmat_IP(historyIP.nrow(), 12);
   	for (int i = 0; i < historyIP.nrow(); i++) {
   	  triadmat_IP(i, 0) = historyIP(i, 0);
	    triadmat_IP(i, 1) = historyIP(i, 1) + historyIP(i, 3) + historyIP(i, 4);
	    triadmat_IP(i, 2) = historyIP(i, 2) + historyIP(i, 5) + historyIP(i, 6) + 
	                        historyIP(i, 7) + historyIP(i, 8);
   	  triadmat_IP(i, 3) = historyIP(i, 9);
	    triadmat_IP(i, 4) = historyIP(i, 10) + historyIP(i, 12) + historyIP(i, 13);
	    triadmat_IP(i, 5) = historyIP(i, 11) + historyIP(i, 14) + historyIP(i, 15) + 
	                        historyIP(i, 16) + historyIP(i, 17);
   	  triadmat_IP(i, 6) = historyIP(i, 18);
	    triadmat_IP(i, 7) = historyIP(i, 19) + historyIP(i, 21)+historyIP(i, 22);
	    triadmat_IP(i, 8) = historyIP(i, 20) + historyIP(i, 23) + historyIP(i, 24) + 
	                        historyIP(i, 25) + historyIP(i, 26);
   	  triadmat_IP(i, 9) = historyIP(i, 27);
	    triadmat_IP(i, 10) = historyIP(i, 28) + historyIP(i, 30) + historyIP(i, 31);
	    triadmat_IP(i, 11) = historyIP(i, 29) + historyIP(i, 32) + historyIP(i, 33) + 
	                         historyIP(i, 34) + historyIP(i, 35);
   	}
    IPmat[IP] = triadmat_IP;
  }
  return IPmat;
}

// **********************************************************//
//                Multiply matrix X and vector B             //
// **********************************************************//
// [[Rcpp::export]]
NumericVector MultiplyXB(NumericMatrix X, NumericVector B){
  NumericVector XB(X.nrow());
  for (int i = 0; i < X.nrow(); i++) {
   double sum = Rcpp::as<double>(0);
    for (int j = 0; j < B.size(); j++) {
      sum = sum + X(i, j) * B[j];
    }
    XB[i] = sum;
  }
  return XB;
}

// **********************************************************//
//      Multiply list of matrix X and list of vector B       //
// **********************************************************//
// [[Rcpp::export]]
List MultiplyXBList(List X, List B){
	List XB(B.size());
	for (int IP = 0; IP < B.size(); IP++) {
		arma::mat XB_IP(X.size(), X.size());
		arma::vec B_IP = B[IP];
		for (int n = 0; n < X.size(); n++) {
			List X_n = X[n];
			arma::mat X_n_IP = X_n[IP];
			arma::vec rows = X_n_IP * B_IP;
			XB_IP.row(n) = rows.t();
		}
		XB[IP] = XB_IP;
	}	
  return XB;
}

// **********************************************************//
//     Hyperparameter optimization of alpha - denominator    //
// **********************************************************//
// [[Rcpp::export]]
double UpdateDenom(double alpha, IntegerVector nwordtable){
 double D = Rcpp::as<double>(0);
 double S = Rcpp::as<double>(0);
  for (int n = 1; n < (nwordtable.size() + 1); n++) {
    D += 1 / (n - 1 + alpha);
    S += nwordtable[n - 1] * D;
  }
  return S;
}

// **********************************************************//
//      Hyperparameter optimization of alpha - numerator     //
// **********************************************************//
// [[Rcpp::export]]
NumericVector UpdateNum(NumericVector vec, List nKwordtable) {
  NumericVector s(vec.size());
  for (int k = 0; k < vec.size(); k++){
   double d = Rcpp::as<double>(0);
    IntegerVector newtable = nKwordtable[k];
    for (int n = 1; n < (newtable.size() + 1); n++) {
      d += 1 / (n - 1 + vec[k]);
      s[k] += newtable[n - 1] * d;
    }
  }
  return s;
}

// **********************************************************//
//                 C++ version of tabulate() in R            //
// **********************************************************//
// [[Rcpp::export]]
IntegerVector tabulateC(const IntegerVector& x, const unsigned max) {
  IntegerVector counts(max);
  std::size_t n = x.size();
  for (std::size_t i=0; i < n; i++) {
    if (x[i] > 0 && x[i] <= max)
      counts[x[i] - 1]++;
  }
  return counts;
}

// **********************************************************//
//      Calculate lambda matrix for document d (Eq. (4))     //
// **********************************************************//
// [[Rcpp::export]]
arma::mat lambda_cpp(arma::vec p_d, List XB) {
  int nIP = XB.size();
  arma::mat example = XB[0];
  int node = example.n_rows;
  arma::mat lambdamat = arma::zeros(node, node);
  for (int IP = 0; IP < nIP; IP++) {
  	if (p_d[IP] > 0) {
    arma::mat XB_IP = XB[IP];
  	arma::mat eXB_IP = exp(XB_IP);
  	arma::umat uinf = find(eXB_IP == arma::datum::inf);
  	eXB_IP.elem(uinf).fill(exp(700));
    lambdamat += p_d[IP] * eXB_IP;
  	}
  }
  lambdamat.diag().zeros();
  return lambdamat;
}

// **********************************************************//
//              Topic contribution in update of Z            //
// **********************************************************//
// [[Rcpp::export]]
NumericVector TopicInEqZ(int K, IntegerVector currentZ_d, 
                       double alpha, NumericVector mvec, int doc) {
	IntegerVector table_topics = tabulateC(currentZ_d, K);
	NumericVector table_topic_adj(K);
	NumericVector alphamvec(K);
	for (int i = 0; i < K; i++) {
		if (table_topics[i] > 0) {
			table_topic_adj[i] = table_topics[i] - 1;
		}
		alphamvec[i] = alpha * mvec[i];
	} 
	return log(table_topic_adj + alphamvec);
}


// **********************************************************//
//               Word contribution in update of Z            //
// **********************************************************//
// [[Rcpp::export]]
NumericMatrix WordInEqZ(int K, IntegerVector textlistd, List tableW, 
                       double beta, NumericVector nvec){
  NumericMatrix consts(textlistd.size(), K);
	for (int k = 0; k < K; k++){
		NumericVector tablek = tableW[k];
		NumericVector num(textlistd.size());
		NumericVector denom(textlistd.size());
		for (int w = 0; w < textlistd.size(); w++){
			num[w] = log(tablek[textlistd[w] - 1] - (tablek[textlistd[w] - 1] > 0) + 
			         beta * nvec[textlistd[w] - 1]);  
	 		denom[w] = log(sum(tablek) - (tablek[textlistd[w] - 1] > 0) + beta);
		}
		consts(_,k) = num - denom;
	}
	return consts;
}

// **********************************************************//
//               Edge contribution in update of Z            //
// **********************************************************//
// [[Rcpp::export]]
double EdgeInEqZ(IntegerMatrix iJi, NumericMatrix lambda,double delta) {
	double edges = Rcpp::as<double>(0);
	for (int i = 0; i < iJi.nrow(); i++) {
		for (int j = 0; j < iJi.ncol(); j++) {
			if (i != j) {
		 double deltalambda = Rcpp::as<double>(delta * lambda(i, j));
		 if (deltalambda < exp(-700)) {
		deltalambda = exp(-700);
		}
			edges = edges + iJi(i, j) * log(deltalambda) - log(deltalambda + 1);
			}
		}
	}
	return edges;
}

// **********************************************************//
//               Edge contribution in update of Z            //
// **********************************************************//
// [[Rcpp::export]]
double EdgeInEqZ_Gibbs(arma::mat iJi, arma::mat lambda,double delta) {
	double edges = Rcpp::as<double>(0);
  arma::umat uinf = find(log(lambda) == -arma::datum::inf);
  lambda.elem(uinf).fill(exp(-700));
	for (int i = 0; i < iJi.n_rows; i++) {
		arma::vec normal = arma::zeros(iJi.n_rows - 1);
		double prob = Rcpp::as<double>(0);
		int iter = 0;
		for (int j = 0; j < iJi.n_rows; j++) {
			if (i != j) {
				double pre = Rcpp::as<double>(delta + log(lambda(i, j)));
				if (pre > 35) {
					normal[iter] = pre;
				} else {
					if (pre < -10) {
						normal[iter] = exp(pre);
					} else {
						normal[iter] = log(exp(pre) + 1);
					}
				}
				prob += (delta + log(lambda(i, j))) * iJi(i, j);
				iter = iter + 1;
		  }
		}
		double sumnorm = Rcpp::as<double>(sum(normal));
		double normalizer = Rcpp::as<double>(0);
		if (sumnorm >= 13) {
			normalizer = sumnorm;
		} else {
		  if (exp(sumnorm) <= 1) {
		    normalizer = -700;
		  } else {
			normalizer = log(exp(sumnorm) - 1);
		}
		}
		edges += prob - normalizer;
	}
	return edges;
}


// [[Rcpp::export]]
arma::vec EdgeInEqZ_Gibbs2(arma::mat iJi, arma::mat lambda, double delta) {
  arma::vec edges = arma::zeros(iJi.n_rows);
  arma::umat uinf = find(log(lambda) == -arma::datum::inf);
  lambda.elem(uinf).fill(exp(-700));
  for (int i = 0; i < iJi.n_rows; i++) {
    arma::vec normal = arma::zeros(iJi.n_rows - 1);
   double prob = Rcpp::as<double>(0);
    int iter = 0;
    for (int j = 0; j < iJi.n_rows; j++) {
      if (i != j) {
       double pre = delta + log(lambda(i, j));
        if (pre > 35) {
          normal[iter] = pre;
        } else {
          if (pre < -10) {
            normal[iter] = exp(pre);
          } else {
            normal[iter] = log(exp(pre) + 1);
          }
        }
        prob += (delta + log(lambda(i, j))) * iJi(i, j);
        iter = iter + 1;
      }
    }
   double sumnorm = Rcpp::as<double>(sum(normal));
   double normalizer = Rcpp::as<double>(0);
    if (sumnorm >= 13) {
      normalizer = sumnorm;
    } else {
      if (exp(sumnorm) <= 1) {
        normalizer = -700;
      } else {
        normalizer = log(exp(sumnorm) - 1);
      }
    }
    edges[i] = prob - normalizer;
  }
  return edges;
}


// **********************************************************//
//               Time contribution in update of Z            //
// **********************************************************//
// [[Rcpp::export]]
double TimeInEqZ(NumericVector LambdaiJi,double observedtdiff) {
 double sumlambda = Rcpp::as<double>(sum(LambdaiJi));
  if (sumlambda == arma::datum::inf) {
    sumlambda = exp(700);
  }
	return - observedtdiff * sumlambda;
}

// **********************************************************//
//          Observed Edge contribution in update of Z        //
// **********************************************************//
// [[Rcpp::export]]
double ObservedInEqZ(double observediJi) {
	if (observediJi < exp(-700)) {
		observediJi = exp(-700);
	}
	return log(observediJi);
}

// **********************************************************//
//        Calculate lambda for every sender in document d    //
// **********************************************************//
// [[Rcpp::export]]
NumericVector lambdaiJi(NumericVector p_d, List XB, IntegerMatrix iJi) {
	int nIP = p_d.size();
	int node = iJi.nrow();
	NumericVector out(node);
	for (int IP = 0; IP < nIP; IP++) {
		NumericMatrix XB_IP = XB[IP];
		for (int i = 0; i < node; i++) {
			double rowsums = Rcpp::as<double>(0);
			for (int j = 0; j < node; j++) {
				rowsums += XB_IP(i, j) * iJi(i, j);
			}
			double rowiJi = Rcpp::as<double>(exp(rowsums / sum(iJi(i, _))));
			if (rowiJi == arma::datum::inf) {
			  rowiJi = exp(700);
			}
			out[i] += p_d[IP] * rowiJi;
		}		
	}
	return out;
}


// **********************************************************//
//         Resampling the augmented data J_a (Sec 3.1)       //
// **********************************************************//
// [[Rcpp::export]]
arma::vec DataAug_cpp(arma::vec iJi_di, arma::vec lambda_di, List XB, arma::vec p_d,double delta,double timeinc_d, int i, int j) {
	arma::vec prob = arma::zeros(2);
	arma::vec iJi_di1 = iJi_di;
	arma::vec iJi_di0 = iJi_di;
	int nIP = p_d.size();
	arma::vec out = arma::zeros(2);
	iJi_di1[j - 1] = 1;
	iJi_di0[j - 1] = 0;
	int sumiJi0 =  sum(iJi_di0);
	for (int IP = 0; IP < nIP; IP++) {
		arma::vec XB_IP = XB[IP];
			double rowsums1 = exp(sum(XB_IP % iJi_di1) / sum(iJi_di1));
			if (rowsums1 == arma::datum::inf) {
			  rowsums1 = exp(700);
			}
			out[1] += p_d[IP] * rowsums1;
			if (sumiJi0 > 0) {
			double rowsums0 = exp(sum(XB_IP % iJi_di0) / sumiJi0);
			  if (rowsums0 == arma::datum::inf) {
			    rowsums0 = exp(700);
			  }
			out[0] += p_d[IP] * rowsums0;
			}
	}
	prob[1] = log(delta) + log(lambda_di[j - 1]) - (timeinc_d * out[1]);
	prob[0] = -timeinc_d * out[0];
	prob = prob - max(prob);
	return prob;
}

// **********************************************************//
//         Resampling the augmented data J_a (Sec 3.1)       //
// **********************************************************//
// [[Rcpp::export]]
arma::vec DataAug_cpp_Gibbs(arma::vec iJi_di, arma::vec lambda_di, List XB, arma::vec p_d, double delta, double timeinc_d, int j) {
	arma::vec prob = arma::zeros(2);
	arma::vec iJi_di1 = iJi_di;
	arma::vec iJi_di0 = iJi_di;
	int nIP = p_d.size();
	arma::vec out = arma::zeros(2);
	iJi_di1[j - 1] = 1;
	iJi_di0[j - 1] = 0;
	double sumiJi0 = sum(iJi_di0);
	for (int IP = 0; IP < nIP; IP++) {
			if (p_d[IP] > 0) {
			arma::vec XB_IP = XB[IP];
			double rowsums1 = exp(sum(XB_IP % iJi_di1) / sum(iJi_di1));
			if (rowsums1 == arma::datum::inf) {
			  rowsums1 = exp(700);
			}
			out[1] += p_d[IP] * rowsums1;
			if (sumiJi0 > 0) {
			double rowsums0 = exp(sum(XB_IP % iJi_di0) / sumiJi0);
			  if (rowsums0 == arma::datum::inf) {
			    rowsums0 = exp(700);
			  }
			out[0] += p_d[IP] * rowsums0;
				}
			}
	}
	if (lambda_di[j - 1] < exp(-700)) {
	  lambda_di[j - 1] = exp(-700);
	}
		prob[1] = delta + log(lambda_di[j - 1]) - timeinc_d * out[1];
	if (sumiJi0 > 0) {
		prob[0] = - timeinc_d * out[0];
	} else {
		prob[0] = -arma::datum::inf;
	}
	prob = prob - max(prob);
	return exp(prob);
}
