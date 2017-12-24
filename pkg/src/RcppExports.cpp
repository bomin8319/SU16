// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Mahalanobis
arma::vec Mahalanobis(arma::mat x, arma::rowvec center, arma::mat cov);
RcppExport SEXP _IPTM_Mahalanobis(SEXP xSEXP, SEXP centerSEXP, SEXP covSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type center(centerSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov(covSEXP);
    rcpp_result_gen = Rcpp::wrap(Mahalanobis(x, center, cov));
    return rcpp_result_gen;
END_RCPP
}
// dmvnorm_arma
arma::vec dmvnorm_arma(arma::mat x, arma::rowvec mean, arma::mat sigma);
RcppExport SEXP _IPTM_dmvnorm_arma(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm_arma(x, mean, sigma));
    return rcpp_result_gen;
END_RCPP
}
// rmvnorm_arma
arma::mat rmvnorm_arma(int n, const arma::vec& mu, const arma::mat& Sigma);
RcppExport SEXP _IPTM_rmvnorm_arma(SEXP nSEXP, SEXP muSEXP, SEXP SigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnorm_arma(n, mu, Sigma));
    return rcpp_result_gen;
END_RCPP
}
// priorsum
double priorsum(arma::mat var, arma::rowvec mu, arma::mat x);
RcppExport SEXP _IPTM_priorsum(SEXP varSEXP, SEXP muSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type var(varSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(priorsum(var, mu, x));
    return rcpp_result_gen;
END_RCPP
}
// transpose
arma::mat transpose(arma::mat x);
RcppExport SEXP _IPTM_transpose(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(transpose(x));
    return rcpp_result_gen;
END_RCPP
}
// callRMultinom
IntegerVector callRMultinom(NumericVector x);
RcppExport SEXP _IPTM_callRMultinom(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(callRMultinom(x));
    return rcpp_result_gen;
END_RCPP
}
// multinom_vec
IntegerVector multinom_vec(int nSample, NumericVector props);
RcppExport SEXP _IPTM_multinom_vec(SEXP nSampleSEXP, SEXP propsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nSample(nSampleSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type props(propsSEXP);
    rcpp_result_gen = Rcpp::wrap(multinom_vec(nSample, props));
    return rcpp_result_gen;
END_RCPP
}
// which_int
int which_int(int value, IntegerVector x);
RcppExport SEXP _IPTM_which_int(SEXP valueSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(which_int(value, x));
    return rcpp_result_gen;
END_RCPP
}
// which_num
int which_num(double value, NumericVector x);
RcppExport SEXP _IPTM_which_num(SEXP valueSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(which_num(value, x));
    return rcpp_result_gen;
END_RCPP
}
// rdirichlet_cpp
arma::mat rdirichlet_cpp(int num_samples, arma::vec alpha_m);
RcppExport SEXP _IPTM_rdirichlet_cpp(SEXP num_samplesSEXP, SEXP alpha_mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type num_samples(num_samplesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_m(alpha_mSEXP);
    rcpp_result_gen = Rcpp::wrap(rdirichlet_cpp(num_samples, alpha_m));
    return rcpp_result_gen;
END_RCPP
}
// which_cpp
IntegerVector which_cpp(int value, NumericVector x);
RcppExport SEXP _IPTM_which_cpp(SEXP valueSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(which_cpp(value, x));
    return rcpp_result_gen;
END_RCPP
}
// pdmat
NumericMatrix pdmat(List z, NumericVector l, int nIP);
RcppExport SEXP _IPTM_pdmat(SEXP zSEXP, SEXP lSEXP, SEXP nIPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type l(lSEXP);
    Rcpp::traits::input_parameter< int >::type nIP(nIPSEXP);
    rcpp_result_gen = Rcpp::wrap(pdmat(z, l, nIP));
    return rcpp_result_gen;
END_RCPP
}
// History
List History(List edge, NumericMatrix p_d, IntegerVector node, double when);
RcppExport SEXP _IPTM_History(SEXP edgeSEXP, SEXP p_dSEXP, SEXP nodeSEXP, SEXP whenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type edge(edgeSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p_d(p_dSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< double >::type when(whenSEXP);
    rcpp_result_gen = Rcpp::wrap(History(edge, p_d, node, when));
    return rcpp_result_gen;
END_RCPP
}
// Degree
List Degree(List history, IntegerVector node, int sender);
RcppExport SEXP _IPTM_Degree(SEXP historySEXP, SEXP nodeSEXP, SEXP senderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type history(historySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< int >::type sender(senderSEXP);
    rcpp_result_gen = Rcpp::wrap(Degree(history, node, sender));
    return rcpp_result_gen;
END_RCPP
}
// Dyadic
List Dyadic(List history, IntegerVector node, int sender);
RcppExport SEXP _IPTM_Dyadic(SEXP historySEXP, SEXP nodeSEXP, SEXP senderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type history(historySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< int >::type sender(senderSEXP);
    rcpp_result_gen = Rcpp::wrap(Dyadic(history, node, sender));
    return rcpp_result_gen;
END_RCPP
}
// Triadic
List Triadic(List history, IntegerVector node, int sender);
RcppExport SEXP _IPTM_Triadic(SEXP historySEXP, SEXP nodeSEXP, SEXP senderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type history(historySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< int >::type sender(senderSEXP);
    rcpp_result_gen = Rcpp::wrap(Triadic(history, node, sender));
    return rcpp_result_gen;
END_RCPP
}
// Triadic_reduced
List Triadic_reduced(List triadic);
RcppExport SEXP _IPTM_Triadic_reduced(SEXP triadicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type triadic(triadicSEXP);
    rcpp_result_gen = Rcpp::wrap(Triadic_reduced(triadic));
    return rcpp_result_gen;
END_RCPP
}
// Netstats_cpp
List Netstats_cpp(List historyIP, IntegerVector node, IntegerVector netstat);
RcppExport SEXP _IPTM_Netstats_cpp(SEXP historyIPSEXP, SEXP nodeSEXP, SEXP netstatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type historyIP(historyIPSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type netstat(netstatSEXP);
    rcpp_result_gen = Rcpp::wrap(Netstats_cpp(historyIP, node, netstat));
    return rcpp_result_gen;
END_RCPP
}
// inner
double inner(arma::vec x, arma::vec y);
RcppExport SEXP _IPTM_inner(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(inner(x, y));
    return rcpp_result_gen;
END_RCPP
}
// ximat
NumericMatrix ximat(NumericVector timemat, NumericMatrix eta1, NumericMatrix eta2);
RcppExport SEXP _IPTM_ximat(SEXP timematSEXP, SEXP eta1SEXP, SEXP eta2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type timemat(timematSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type eta1(eta1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type eta2(eta2SEXP);
    rcpp_result_gen = Rcpp::wrap(ximat(timemat, eta1, eta2));
    return rcpp_result_gen;
END_RCPP
}
// xi_all
List xi_all(NumericMatrix timemat, NumericMatrix eta1, NumericMatrix eta2, IntegerVector edgetrim);
RcppExport SEXP _IPTM_xi_all(SEXP timematSEXP, SEXP eta1SEXP, SEXP eta2SEXP, SEXP edgetrimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type timemat(timematSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type eta1(eta1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type eta2(eta2SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type edgetrim(edgetrimSEXP);
    rcpp_result_gen = Rcpp::wrap(xi_all(timemat, eta1, eta2, edgetrim));
    return rcpp_result_gen;
END_RCPP
}
// MultiplyYeta
NumericVector MultiplyYeta(NumericVector Y, NumericMatrix eta);
RcppExport SEXP _IPTM_MultiplyYeta(SEXP YSEXP, SEXP etaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type eta(etaSEXP);
    rcpp_result_gen = Rcpp::wrap(MultiplyYeta(Y, eta));
    return rcpp_result_gen;
END_RCPP
}
// MultiplyXB
List MultiplyXB(List X, NumericMatrix B);
RcppExport SEXP _IPTM_MultiplyXB(SEXP XSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(MultiplyXB(X, B));
    return rcpp_result_gen;
END_RCPP
}
// UpdateDenom
double UpdateDenom(double alpha, IntegerVector nwordtable);
RcppExport SEXP _IPTM_UpdateDenom(SEXP alphaSEXP, SEXP nwordtableSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nwordtable(nwordtableSEXP);
    rcpp_result_gen = Rcpp::wrap(UpdateDenom(alpha, nwordtable));
    return rcpp_result_gen;
END_RCPP
}
// UpdateNum
NumericVector UpdateNum(NumericVector vec, List nKwordtable);
RcppExport SEXP _IPTM_UpdateNum(SEXP vecSEXP, SEXP nKwordtableSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< List >::type nKwordtable(nKwordtableSEXP);
    rcpp_result_gen = Rcpp::wrap(UpdateNum(vec, nKwordtable));
    return rcpp_result_gen;
END_RCPP
}
// tabulateC
IntegerVector tabulateC(const IntegerVector& x, const signed max);
RcppExport SEXP _IPTM_tabulateC(SEXP xSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const signed >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(tabulateC(x, max));
    return rcpp_result_gen;
END_RCPP
}
// lambda_cpp
arma::mat lambda_cpp(arma::vec p_d, List XB);
RcppExport SEXP _IPTM_lambda_cpp(SEXP p_dSEXP, SEXP XBSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type p_d(p_dSEXP);
    Rcpp::traits::input_parameter< List >::type XB(XBSEXP);
    rcpp_result_gen = Rcpp::wrap(lambda_cpp(p_d, XB));
    return rcpp_result_gen;
END_RCPP
}
// mu_cpp
double mu_cpp(arma::vec p_d, NumericVector xi);
RcppExport SEXP _IPTM_mu_cpp(SEXP p_dSEXP, SEXP xiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type p_d(p_dSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xi(xiSEXP);
    rcpp_result_gen = Rcpp::wrap(mu_cpp(p_d, xi));
    return rcpp_result_gen;
END_RCPP
}
// mu_vec
NumericVector mu_vec(arma::vec p_d, NumericMatrix xi);
RcppExport SEXP _IPTM_mu_vec(SEXP p_dSEXP, SEXP xiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type p_d(p_dSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type xi(xiSEXP);
    rcpp_result_gen = Rcpp::wrap(mu_vec(p_d, xi));
    return rcpp_result_gen;
END_RCPP
}
// mu_mat
NumericMatrix mu_mat(NumericMatrix p_d, List xi, IntegerVector edgetrim);
RcppExport SEXP _IPTM_mu_mat(SEXP p_dSEXP, SEXP xiSEXP, SEXP edgetrimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type p_d(p_dSEXP);
    Rcpp::traits::input_parameter< List >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type edgetrim(edgetrimSEXP);
    rcpp_result_gen = Rcpp::wrap(mu_mat(p_d, xi, edgetrim));
    return rcpp_result_gen;
END_RCPP
}
// TopicInEqZ
NumericVector TopicInEqZ(int K, IntegerVector z_d, double alpha, NumericVector mvec);
RcppExport SEXP _IPTM_TopicInEqZ(SEXP KSEXP, SEXP z_dSEXP, SEXP alphaSEXP, SEXP mvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type z_d(z_dSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mvec(mvecSEXP);
    rcpp_result_gen = Rcpp::wrap(TopicInEqZ(K, z_d, alpha, mvec));
    return rcpp_result_gen;
END_RCPP
}
// WordInEqZ
NumericMatrix WordInEqZ(int K, IntegerVector textlistd, List tableW, double beta, int V);
RcppExport SEXP _IPTM_WordInEqZ(SEXP KSEXP, SEXP textlistdSEXP, SEXP tableWSEXP, SEXP betaSEXP, SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type textlistd(textlistdSEXP);
    Rcpp::traits::input_parameter< List >::type tableW(tableWSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(WordInEqZ(K, textlistd, tableW, beta, V));
    return rcpp_result_gen;
END_RCPP
}
// TopicWord
NumericMatrix TopicWord(int K, IntegerVector z_d, IntegerVector textlistd, List tableW, double alpha, NumericVector mvec, double beta, int V);
RcppExport SEXP _IPTM_TopicWord(SEXP KSEXP, SEXP z_dSEXP, SEXP textlistdSEXP, SEXP tableWSEXP, SEXP alphaSEXP, SEXP mvecSEXP, SEXP betaSEXP, SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type z_d(z_dSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type textlistd(textlistdSEXP);
    Rcpp::traits::input_parameter< List >::type tableW(tableWSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mvec(mvecSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(TopicWord(K, z_d, textlistd, tableW, alpha, mvec, beta, V));
    return rcpp_result_gen;
END_RCPP
}
// u_Gibbs
arma::vec u_Gibbs(arma::vec u_di, arma::vec lambda_di, double delta, int j);
RcppExport SEXP _IPTM_u_Gibbs(SEXP u_diSEXP, SEXP lambda_diSEXP, SEXP deltaSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type u_di(u_diSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda_di(lambda_diSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(u_Gibbs(u_di, lambda_di, delta, j));
    return rcpp_result_gen;
END_RCPP
}
// expconst
NumericVector expconst(NumericVector consts);
RcppExport SEXP _IPTM_expconst(SEXP constsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type consts(constsSEXP);
    rcpp_result_gen = Rcpp::wrap(expconst(consts));
    return rcpp_result_gen;
END_RCPP
}
// Edgepart
double Edgepart(arma::mat u, arma::mat lambda, double delta);
RcppExport SEXP _IPTM_Edgepart(SEXP uSEXP, SEXP lambdaSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type u(uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(Edgepart(u, lambda, delta));
    return rcpp_result_gen;
END_RCPP
}
// Edgepartsum
double Edgepartsum(List X, NumericVector p_d, NumericMatrix B, arma::mat u, double delta);
RcppExport SEXP _IPTM_Edgepartsum(SEXP XSEXP, SEXP p_dSEXP, SEXP BSEXP, SEXP uSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p_d(p_dSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type u(uSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(Edgepartsum(X, p_d, B, u, delta));
    return rcpp_result_gen;
END_RCPP
}
// Edgepartsum2
double Edgepartsum2(List X, NumericMatrix p_d, NumericMatrix B, List u, double delta, IntegerVector uniquehist);
RcppExport SEXP _IPTM_Edgepartsum2(SEXP XSEXP, SEXP p_dSEXP, SEXP BSEXP, SEXP uSEXP, SEXP deltaSEXP, SEXP uniquehistSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p_d(p_dSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    Rcpp::traits::input_parameter< List >::type u(uSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type uniquehist(uniquehistSEXP);
    rcpp_result_gen = Rcpp::wrap(Edgepartsum2(X, p_d, B, u, delta, uniquehist));
    return rcpp_result_gen;
END_RCPP
}
// Timepart
double Timepart(arma::vec mu, double sigma_tau, double a_d, double t_d);
RcppExport SEXP _IPTM_Timepart(SEXP muSEXP, SEXP sigma_tauSEXP, SEXP a_dSEXP, SEXP t_dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_tau(sigma_tauSEXP);
    Rcpp::traits::input_parameter< double >::type a_d(a_dSEXP);
    Rcpp::traits::input_parameter< double >::type t_d(t_dSEXP);
    rcpp_result_gen = Rcpp::wrap(Timepart(mu, sigma_tau, a_d, t_d));
    return rcpp_result_gen;
END_RCPP
}
// Timepartsum
double Timepartsum(NumericMatrix mumat, double sigma_tau, IntegerVector senders, NumericVector timeinc, IntegerVector edgetrim);
RcppExport SEXP _IPTM_Timepartsum(SEXP mumatSEXP, SEXP sigma_tauSEXP, SEXP sendersSEXP, SEXP timeincSEXP, SEXP edgetrimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mumat(mumatSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_tau(sigma_tauSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type senders(sendersSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type timeinc(timeincSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type edgetrim(edgetrimSEXP);
    rcpp_result_gen = Rcpp::wrap(Timepartsum(mumat, sigma_tau, senders, timeinc, edgetrim));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_IPTM_Mahalanobis", (DL_FUNC) &_IPTM_Mahalanobis, 3},
    {"_IPTM_dmvnorm_arma", (DL_FUNC) &_IPTM_dmvnorm_arma, 3},
    {"_IPTM_rmvnorm_arma", (DL_FUNC) &_IPTM_rmvnorm_arma, 3},
    {"_IPTM_priorsum", (DL_FUNC) &_IPTM_priorsum, 3},
    {"_IPTM_transpose", (DL_FUNC) &_IPTM_transpose, 1},
    {"_IPTM_callRMultinom", (DL_FUNC) &_IPTM_callRMultinom, 1},
    {"_IPTM_multinom_vec", (DL_FUNC) &_IPTM_multinom_vec, 2},
    {"_IPTM_which_int", (DL_FUNC) &_IPTM_which_int, 2},
    {"_IPTM_which_num", (DL_FUNC) &_IPTM_which_num, 2},
    {"_IPTM_rdirichlet_cpp", (DL_FUNC) &_IPTM_rdirichlet_cpp, 2},
    {"_IPTM_which_cpp", (DL_FUNC) &_IPTM_which_cpp, 2},
    {"_IPTM_pdmat", (DL_FUNC) &_IPTM_pdmat, 3},
    {"_IPTM_History", (DL_FUNC) &_IPTM_History, 4},
    {"_IPTM_Degree", (DL_FUNC) &_IPTM_Degree, 3},
    {"_IPTM_Dyadic", (DL_FUNC) &_IPTM_Dyadic, 3},
    {"_IPTM_Triadic", (DL_FUNC) &_IPTM_Triadic, 3},
    {"_IPTM_Triadic_reduced", (DL_FUNC) &_IPTM_Triadic_reduced, 1},
    {"_IPTM_Netstats_cpp", (DL_FUNC) &_IPTM_Netstats_cpp, 3},
    {"_IPTM_inner", (DL_FUNC) &_IPTM_inner, 2},
    {"_IPTM_ximat", (DL_FUNC) &_IPTM_ximat, 3},
    {"_IPTM_xi_all", (DL_FUNC) &_IPTM_xi_all, 4},
    {"_IPTM_MultiplyYeta", (DL_FUNC) &_IPTM_MultiplyYeta, 2},
    {"_IPTM_MultiplyXB", (DL_FUNC) &_IPTM_MultiplyXB, 2},
    {"_IPTM_UpdateDenom", (DL_FUNC) &_IPTM_UpdateDenom, 2},
    {"_IPTM_UpdateNum", (DL_FUNC) &_IPTM_UpdateNum, 2},
    {"_IPTM_tabulateC", (DL_FUNC) &_IPTM_tabulateC, 2},
    {"_IPTM_lambda_cpp", (DL_FUNC) &_IPTM_lambda_cpp, 2},
    {"_IPTM_mu_cpp", (DL_FUNC) &_IPTM_mu_cpp, 2},
    {"_IPTM_mu_vec", (DL_FUNC) &_IPTM_mu_vec, 2},
    {"_IPTM_mu_mat", (DL_FUNC) &_IPTM_mu_mat, 3},
    {"_IPTM_TopicInEqZ", (DL_FUNC) &_IPTM_TopicInEqZ, 4},
    {"_IPTM_WordInEqZ", (DL_FUNC) &_IPTM_WordInEqZ, 5},
    {"_IPTM_TopicWord", (DL_FUNC) &_IPTM_TopicWord, 8},
    {"_IPTM_u_Gibbs", (DL_FUNC) &_IPTM_u_Gibbs, 4},
    {"_IPTM_expconst", (DL_FUNC) &_IPTM_expconst, 1},
    {"_IPTM_Edgepart", (DL_FUNC) &_IPTM_Edgepart, 3},
    {"_IPTM_Edgepartsum", (DL_FUNC) &_IPTM_Edgepartsum, 5},
    {"_IPTM_Edgepartsum2", (DL_FUNC) &_IPTM_Edgepartsum2, 6},
    {"_IPTM_Timepart", (DL_FUNC) &_IPTM_Timepart, 4},
    {"_IPTM_Timepartsum", (DL_FUNC) &_IPTM_Timepartsum, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_IPTM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
