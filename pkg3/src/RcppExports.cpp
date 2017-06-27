// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// callRMultinom
IntegerVector callRMultinom(NumericVector x);
RcppExport SEXP IPTM_callRMultinom(SEXP xSEXP) {
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
RcppExport SEXP IPTM_multinom_vec(SEXP nSampleSEXP, SEXP propsSEXP) {
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
RcppExport SEXP IPTM_which_int(SEXP valueSEXP, SEXP xSEXP) {
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
int which_num(int value, NumericVector x);
RcppExport SEXP IPTM_which_num(SEXP valueSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(which_num(value, x));
    return rcpp_result_gen;
END_RCPP
}
// rdirichlet_cpp
arma::mat rdirichlet_cpp(int num_samples, arma::vec alpha_m);
RcppExport SEXP IPTM_rdirichlet_cpp(SEXP num_samplesSEXP, SEXP alpha_mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type num_samples(num_samplesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_m(alpha_mSEXP);
    rcpp_result_gen = Rcpp::wrap(rdirichlet_cpp(num_samples, alpha_m));
    return rcpp_result_gen;
END_RCPP
}
// rbinom_mat
IntegerMatrix rbinom_mat(NumericMatrix probmat);
RcppExport SEXP IPTM_rbinom_mat(SEXP probmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type probmat(probmatSEXP);
    rcpp_result_gen = Rcpp::wrap(rbinom_mat(probmat));
    return rcpp_result_gen;
END_RCPP
}
// History
List History(List edge, NumericMatrix p_d, IntegerVector node, double when);
RcppExport SEXP IPTM_History(SEXP edgeSEXP, SEXP p_dSEXP, SEXP nodeSEXP, SEXP whenSEXP) {
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
RcppExport SEXP IPTM_Degree(SEXP historySEXP, SEXP nodeSEXP, SEXP senderSEXP) {
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
RcppExport SEXP IPTM_Dyadic(SEXP historySEXP, SEXP nodeSEXP, SEXP senderSEXP) {
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
RcppExport SEXP IPTM_Triadic(SEXP historySEXP, SEXP nodeSEXP, SEXP senderSEXP) {
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
RcppExport SEXP IPTM_Triadic_reduced(SEXP triadicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type triadic(triadicSEXP);
    rcpp_result_gen = Rcpp::wrap(Triadic_reduced(triadic));
    return rcpp_result_gen;
END_RCPP
}
// MultiplyXB
NumericVector MultiplyXB(NumericMatrix X, NumericVector B);
RcppExport SEXP IPTM_MultiplyXB(SEXP XSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(MultiplyXB(X, B));
    return rcpp_result_gen;
END_RCPP
}
// MultiplyXBList
List MultiplyXBList(List X, List B);
RcppExport SEXP IPTM_MultiplyXBList(SEXP XSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type X(XSEXP);
    Rcpp::traits::input_parameter< List >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(MultiplyXBList(X, B));
    return rcpp_result_gen;
END_RCPP
}
// UpdateDenom
double UpdateDenom(double alpha, IntegerVector nwordtable);
RcppExport SEXP IPTM_UpdateDenom(SEXP alphaSEXP, SEXP nwordtableSEXP) {
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
RcppExport SEXP IPTM_UpdateNum(SEXP vecSEXP, SEXP nKwordtableSEXP) {
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
IntegerVector tabulateC(const IntegerVector& x, const unsigned max);
RcppExport SEXP IPTM_tabulateC(SEXP xSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const unsigned >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(tabulateC(x, max));
    return rcpp_result_gen;
END_RCPP
}
// lambda_cpp
arma::mat lambda_cpp(arma::vec p_d, List XB);
RcppExport SEXP IPTM_lambda_cpp(SEXP p_dSEXP, SEXP XBSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type p_d(p_dSEXP);
    Rcpp::traits::input_parameter< List >::type XB(XBSEXP);
    rcpp_result_gen = Rcpp::wrap(lambda_cpp(p_d, XB));
    return rcpp_result_gen;
END_RCPP
}
// TopicInEqZ
NumericVector TopicInEqZ(int K, IntegerVector currentZ_d, double alpha, NumericVector mvec, int doc);
RcppExport SEXP IPTM_TopicInEqZ(SEXP KSEXP, SEXP currentZ_dSEXP, SEXP alphaSEXP, SEXP mvecSEXP, SEXP docSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type currentZ_d(currentZ_dSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mvec(mvecSEXP);
    Rcpp::traits::input_parameter< int >::type doc(docSEXP);
    rcpp_result_gen = Rcpp::wrap(TopicInEqZ(K, currentZ_d, alpha, mvec, doc));
    return rcpp_result_gen;
END_RCPP
}
// WordInEqZ
NumericMatrix WordInEqZ(int K, IntegerVector textlistd, List tableW, double beta, NumericVector nvec);
RcppExport SEXP IPTM_WordInEqZ(SEXP KSEXP, SEXP textlistdSEXP, SEXP tableWSEXP, SEXP betaSEXP, SEXP nvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type textlistd(textlistdSEXP);
    Rcpp::traits::input_parameter< List >::type tableW(tableWSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nvec(nvecSEXP);
    rcpp_result_gen = Rcpp::wrap(WordInEqZ(K, textlistd, tableW, beta, nvec));
    return rcpp_result_gen;
END_RCPP
}
// EdgeInEqZ
double EdgeInEqZ(IntegerMatrix iJi, NumericMatrix lambda, double delta);
RcppExport SEXP IPTM_EdgeInEqZ(SEXP iJiSEXP, SEXP lambdaSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type iJi(iJiSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(EdgeInEqZ(iJi, lambda, delta));
    return rcpp_result_gen;
END_RCPP
}
// EdgeInEqZ_Gibbs
double EdgeInEqZ_Gibbs(arma::mat iJi, arma::mat lambda, double delta);
RcppExport SEXP IPTM_EdgeInEqZ_Gibbs(SEXP iJiSEXP, SEXP lambdaSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type iJi(iJiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(EdgeInEqZ_Gibbs(iJi, lambda, delta));
    return rcpp_result_gen;
END_RCPP
}
// EdgeInEqZ_Gibbs2
arma::vec EdgeInEqZ_Gibbs2(arma::mat iJi, arma::mat lambda, double delta);
RcppExport SEXP IPTM_EdgeInEqZ_Gibbs2(SEXP iJiSEXP, SEXP lambdaSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type iJi(iJiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(EdgeInEqZ_Gibbs2(iJi, lambda, delta));
    return rcpp_result_gen;
END_RCPP
}
// TimeInEqZ
double TimeInEqZ(NumericVector LambdaiJi, double observedtdiff);
RcppExport SEXP IPTM_TimeInEqZ(SEXP LambdaiJiSEXP, SEXP observedtdiffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type LambdaiJi(LambdaiJiSEXP);
    Rcpp::traits::input_parameter< double >::type observedtdiff(observedtdiffSEXP);
    rcpp_result_gen = Rcpp::wrap(TimeInEqZ(LambdaiJi, observedtdiff));
    return rcpp_result_gen;
END_RCPP
}
// ObservedInEqZ
double ObservedInEqZ(double observediJi);
RcppExport SEXP IPTM_ObservedInEqZ(SEXP observediJiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type observediJi(observediJiSEXP);
    rcpp_result_gen = Rcpp::wrap(ObservedInEqZ(observediJi));
    return rcpp_result_gen;
END_RCPP
}
// lambdaiJi
NumericVector lambdaiJi(NumericVector p_d, List XB, IntegerMatrix iJi);
RcppExport SEXP IPTM_lambdaiJi(SEXP p_dSEXP, SEXP XBSEXP, SEXP iJiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p_d(p_dSEXP);
    Rcpp::traits::input_parameter< List >::type XB(XBSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type iJi(iJiSEXP);
    rcpp_result_gen = Rcpp::wrap(lambdaiJi(p_d, XB, iJi));
    return rcpp_result_gen;
END_RCPP
}
// DataAug_cpp
arma::vec DataAug_cpp(arma::vec iJi_di, arma::vec lambda_di, List XB, arma::vec p_d, double delta, double timeinc_d, int i, int j);
RcppExport SEXP IPTM_DataAug_cpp(SEXP iJi_diSEXP, SEXP lambda_diSEXP, SEXP XBSEXP, SEXP p_dSEXP, SEXP deltaSEXP, SEXP timeinc_dSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type iJi_di(iJi_diSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda_di(lambda_diSEXP);
    Rcpp::traits::input_parameter< List >::type XB(XBSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type p_d(p_dSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type timeinc_d(timeinc_dSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(DataAug_cpp(iJi_di, lambda_di, XB, p_d, delta, timeinc_d, i, j));
    return rcpp_result_gen;
END_RCPP
}
// DataAug_cpp_Gibbs
arma::vec DataAug_cpp_Gibbs(arma::vec iJi_di, arma::vec lambda_di, List XB, arma::vec p_d, double delta, double timeinc_d, int j);
RcppExport SEXP IPTM_DataAug_cpp_Gibbs(SEXP iJi_diSEXP, SEXP lambda_diSEXP, SEXP XBSEXP, SEXP p_dSEXP, SEXP deltaSEXP, SEXP timeinc_dSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type iJi_di(iJi_diSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda_di(lambda_diSEXP);
    Rcpp::traits::input_parameter< List >::type XB(XBSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type p_d(p_dSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type timeinc_d(timeinc_dSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(DataAug_cpp_Gibbs(iJi_di, lambda_di, XB, p_d, delta, timeinc_d, j));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"IPTM_callRMultinom", (DL_FUNC) &IPTM_callRMultinom, 1},
    {"IPTM_multinom_vec", (DL_FUNC) &IPTM_multinom_vec, 2},
    {"IPTM_which_int", (DL_FUNC) &IPTM_which_int, 2},
    {"IPTM_which_num", (DL_FUNC) &IPTM_which_num, 2},
    {"IPTM_rdirichlet_cpp", (DL_FUNC) &IPTM_rdirichlet_cpp, 2},
    {"IPTM_rbinom_mat", (DL_FUNC) &IPTM_rbinom_mat, 1},
    {"IPTM_History", (DL_FUNC) &IPTM_History, 4},
    {"IPTM_Degree", (DL_FUNC) &IPTM_Degree, 3},
    {"IPTM_Dyadic", (DL_FUNC) &IPTM_Dyadic, 3},
    {"IPTM_Triadic", (DL_FUNC) &IPTM_Triadic, 3},
    {"IPTM_Triadic_reduced", (DL_FUNC) &IPTM_Triadic_reduced, 1},
    {"IPTM_MultiplyXB", (DL_FUNC) &IPTM_MultiplyXB, 2},
    {"IPTM_MultiplyXBList", (DL_FUNC) &IPTM_MultiplyXBList, 2},
    {"IPTM_UpdateDenom", (DL_FUNC) &IPTM_UpdateDenom, 2},
    {"IPTM_UpdateNum", (DL_FUNC) &IPTM_UpdateNum, 2},
    {"IPTM_tabulateC", (DL_FUNC) &IPTM_tabulateC, 2},
    {"IPTM_lambda_cpp", (DL_FUNC) &IPTM_lambda_cpp, 2},
    {"IPTM_TopicInEqZ", (DL_FUNC) &IPTM_TopicInEqZ, 5},
    {"IPTM_WordInEqZ", (DL_FUNC) &IPTM_WordInEqZ, 5},
    {"IPTM_EdgeInEqZ", (DL_FUNC) &IPTM_EdgeInEqZ, 3},
    {"IPTM_EdgeInEqZ_Gibbs", (DL_FUNC) &IPTM_EdgeInEqZ_Gibbs, 3},
    {"IPTM_EdgeInEqZ_Gibbs2", (DL_FUNC) &IPTM_EdgeInEqZ_Gibbs2, 3},
    {"IPTM_TimeInEqZ", (DL_FUNC) &IPTM_TimeInEqZ, 2},
    {"IPTM_ObservedInEqZ", (DL_FUNC) &IPTM_ObservedInEqZ, 1},
    {"IPTM_lambdaiJi", (DL_FUNC) &IPTM_lambdaiJi, 3},
    {"IPTM_DataAug_cpp", (DL_FUNC) &IPTM_DataAug_cpp, 8},
    {"IPTM_DataAug_cpp_Gibbs", (DL_FUNC) &IPTM_DataAug_cpp_Gibbs, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_IPTM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
