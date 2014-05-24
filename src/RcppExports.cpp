// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// computeHaClose
NumericVector computeHaClose(NumericVector haOpen, NumericVector haClose);
RcppExport SEXP IKTrading_computeHaClose(SEXP haOpenSEXP, SEXP haCloseSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type haOpen(haOpenSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type haClose(haCloseSEXP );
        NumericVector __result = computeHaClose(haOpen, haClose);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
