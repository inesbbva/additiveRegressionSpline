// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// hatMatrix
arma::vec hatMatrix(arma::mat m, int length);
RcppExport SEXP additiveRegressionSpline_hatMatrix(SEXP mSEXP, SEXP lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type length(lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(hatMatrix(m, length));
    return rcpp_result_gen;
END_RCPP
}
// cubicSpline
arma::mat cubicSpline(NumericVector x, NumericVector knots);
RcppExport SEXP additiveRegressionSpline_cubicSpline(SEXP xSEXP, SEXP knotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type knots(knotsSEXP);
    rcpp_result_gen = Rcpp::wrap(cubicSpline(x, knots));
    return rcpp_result_gen;
END_RCPP
}
// splineModel
List splineModel(NumericVector x, NumericVector knots, arma::mat y);
RcppExport SEXP additiveRegressionSpline_splineModel(SEXP xSEXP, SEXP knotsSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type knots(knotsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(splineModel(x, knots, y));
    return rcpp_result_gen;
END_RCPP
}
// splineModelPenalized
List splineModelPenalized(arma::vec y, NumericVector x, NumericVector knots, double lambda);
RcppExport SEXP additiveRegressionSpline_splineModelPenalized(SEXP ySEXP, SEXP xSEXP, SEXP knotsSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type knots(knotsSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(splineModelPenalized(y, x, knots, lambda));
    return rcpp_result_gen;
END_RCPP
}
// splineModelPMatrix
List splineModelPMatrix(NumericVector x, NumericVector z, NumericVector knots_x, NumericVector knots_z);
RcppExport SEXP additiveRegressionSpline_splineModelPMatrix(SEXP xSEXP, SEXP zSEXP, SEXP knots_xSEXP, SEXP knots_zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type knots_x(knots_xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type knots_z(knots_zSEXP);
    rcpp_result_gen = Rcpp::wrap(splineModelPMatrix(x, z, knots_x, knots_z));
    return rcpp_result_gen;
END_RCPP
}
// splineModelPMatrixFit
List splineModelPMatrixFit(arma::vec y, NumericVector x, arma::mat modelMatrix, arma::mat sX, arma::mat sZ, double lambda_x, double lambda_z);
RcppExport SEXP additiveRegressionSpline_splineModelPMatrixFit(SEXP ySEXP, SEXP xSEXP, SEXP modelMatrixSEXP, SEXP sXSEXP, SEXP sZSEXP, SEXP lambda_xSEXP, SEXP lambda_zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type modelMatrix(modelMatrixSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sX(sXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sZ(sZSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_x(lambda_xSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_z(lambda_zSEXP);
    rcpp_result_gen = Rcpp::wrap(splineModelPMatrixFit(y, x, modelMatrix, sX, sZ, lambda_x, lambda_z));
    return rcpp_result_gen;
END_RCPP
}
