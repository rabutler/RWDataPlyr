// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rdf_to_rwtbl_cpp
DataFrame rdf_to_rwtbl_cpp(std::vector<std::string> rdf);
RcppExport SEXP _RWDataPlyr_rdf_to_rwtbl_cpp(SEXP rdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rdf(rdfSEXP);
    rcpp_result_gen = Rcpp::wrap(rdf_to_rwtbl_cpp(rdf));
    return rcpp_result_gen;
END_RCPP
}
// rdf_to_rwtbl_cpp_old
DataFrame rdf_to_rwtbl_cpp_old(std::vector<std::string> rdf);
RcppExport SEXP _RWDataPlyr_rdf_to_rwtbl_cpp_old(SEXP rdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rdf(rdfSEXP);
    rcpp_result_gen = Rcpp::wrap(rdf_to_rwtbl_cpp_old(rdf));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RWDataPlyr_rdf_to_rwtbl_cpp", (DL_FUNC) &_RWDataPlyr_rdf_to_rwtbl_cpp, 1},
    {"_RWDataPlyr_rdf_to_rwtbl_cpp_old", (DL_FUNC) &_RWDataPlyr_rdf_to_rwtbl_cpp_old, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_RWDataPlyr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
