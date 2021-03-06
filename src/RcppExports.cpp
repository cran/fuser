// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// getNumberNativeIterationsTaken
NumericVector getNumberNativeIterationsTaken();
RcppExport SEXP _fuser_getNumberNativeIterationsTaken() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getNumberNativeIterationsTaken());
    return rcpp_result_gen;
END_RCPP
}
// genFusedLassoProximal_loop
Eigen::MatrixXd genFusedLassoProximal_loop(Nullable<List> XX, Nullable<List> XY, Nullable<List> X_list, Eigen::VectorXd Y, NumericVector samp_sizes, Eigen::MatrixXd C, bool intercept, int p, int k, int num_iters, Nullable<NumericVector> penalty_factors, double L_U_inv, Eigen::MatrixXd B_old, double mu, Eigen::MatrixXd W, Eigen::MatrixXd weighted_delta_f, double tol);
RcppExport SEXP _fuser_genFusedLassoProximal_loop(SEXP XXSEXP, SEXP XYSEXP, SEXP X_listSEXP, SEXP YSEXP, SEXP samp_sizesSEXP, SEXP CSEXP, SEXP interceptSEXP, SEXP pSEXP, SEXP kSEXP, SEXP num_itersSEXP, SEXP penalty_factorsSEXP, SEXP L_U_invSEXP, SEXP B_oldSEXP, SEXP muSEXP, SEXP WSEXP, SEXP weighted_delta_fSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Nullable<List> >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< Nullable<List> >::type XY(XYSEXP);
    Rcpp::traits::input_parameter< Nullable<List> >::type X_list(X_listSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type samp_sizes(samp_sizesSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< bool >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type num_iters(num_itersSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type penalty_factors(penalty_factorsSEXP);
    Rcpp::traits::input_parameter< double >::type L_U_inv(L_U_invSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B_old(B_oldSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type weighted_delta_f(weighted_delta_fSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(genFusedLassoProximal_loop(XX, XY, X_list, Y, samp_sizes, C, intercept, p, k, num_iters, penalty_factors, L_U_inv, B_old, mu, W, weighted_delta_f, tol));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fuser_getNumberNativeIterationsTaken", (DL_FUNC) &_fuser_getNumberNativeIterationsTaken, 0},
    {"_fuser_genFusedLassoProximal_loop", (DL_FUNC) &_fuser_genFusedLassoProximal_loop, 17},
    {NULL, NULL, 0}
};

RcppExport void R_init_fuser(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
