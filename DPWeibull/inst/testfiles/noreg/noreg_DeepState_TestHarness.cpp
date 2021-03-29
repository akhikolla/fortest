// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// noreg_DeepState_TestHarness_generation.cpp and noreg_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List noreg(const int burnin, const int iteration, NumericVector tl, NumericVector tr, IntegerVector delta, IntegerVector pi, IntegerVector c, IntegerVector nm, NumericVector alpha, NumericVector lambda, NumericVector lambda0, const double alpha00, const double alpha0, const double lambda00, const double alphaalpha, const double alphalambda, NumericVector nu, NumericVector ngrp, const double a, const double b, const double ymax, NumericVector t, int m, int thin);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector burnin(1);
  burnin[0]  = RcppDeepState_int();
  qs::c_qsave(burnin,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/burnin.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "burnin values: "<< burnin << std::endl;
  IntegerVector iteration(1);
  iteration[0]  = RcppDeepState_int();
  qs::c_qsave(iteration,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/iteration.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "iteration values: "<< iteration << std::endl;
  NumericVector tl  = RcppDeepState_NumericVector();
  qs::c_qsave(tl,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/tl.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tl values: "<< tl << std::endl;
  NumericVector tr  = RcppDeepState_NumericVector();
  qs::c_qsave(tr,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/tr.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tr values: "<< tr << std::endl;
  IntegerVector delta  = RcppDeepState_IntegerVector();
  qs::c_qsave(delta,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/delta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "delta values: "<< delta << std::endl;
  IntegerVector pi  = RcppDeepState_IntegerVector();
  qs::c_qsave(pi,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/pi.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pi values: "<< pi << std::endl;
  IntegerVector c  = RcppDeepState_IntegerVector();
  qs::c_qsave(c,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/c.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "c values: "<< c << std::endl;
  IntegerVector nm  = RcppDeepState_IntegerVector();
  qs::c_qsave(nm,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/nm.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nm values: "<< nm << std::endl;
  NumericVector alpha  = RcppDeepState_NumericVector();
  qs::c_qsave(alpha,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/alpha.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "alpha values: "<< alpha << std::endl;
  NumericVector lambda  = RcppDeepState_NumericVector();
  qs::c_qsave(lambda,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/lambda.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lambda values: "<< lambda << std::endl;
  NumericVector lambda0  = RcppDeepState_NumericVector();
  qs::c_qsave(lambda0,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/lambda0.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lambda0 values: "<< lambda0 << std::endl;
  NumericVector alpha00(1);
  alpha00[0]  = RcppDeepState_double();
  qs::c_qsave(alpha00,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/alpha00.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "alpha00 values: "<< alpha00 << std::endl;
  NumericVector alpha0(1);
  alpha0[0]  = RcppDeepState_double();
  qs::c_qsave(alpha0,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/alpha0.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "alpha0 values: "<< alpha0 << std::endl;
  NumericVector lambda00(1);
  lambda00[0]  = RcppDeepState_double();
  qs::c_qsave(lambda00,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/lambda00.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lambda00 values: "<< lambda00 << std::endl;
  NumericVector alphaalpha(1);
  alphaalpha[0]  = RcppDeepState_double();
  qs::c_qsave(alphaalpha,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/alphaalpha.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "alphaalpha values: "<< alphaalpha << std::endl;
  NumericVector alphalambda(1);
  alphalambda[0]  = RcppDeepState_double();
  qs::c_qsave(alphalambda,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/alphalambda.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "alphalambda values: "<< alphalambda << std::endl;
  NumericVector nu  = RcppDeepState_NumericVector();
  qs::c_qsave(nu,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/nu.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nu values: "<< nu << std::endl;
  NumericVector ngrp  = RcppDeepState_NumericVector();
  qs::c_qsave(ngrp,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/ngrp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ngrp values: "<< ngrp << std::endl;
  NumericVector a(1);
  a[0]  = RcppDeepState_double();
  qs::c_qsave(a,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/a.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "a values: "<< a << std::endl;
  NumericVector b(1);
  b[0]  = RcppDeepState_double();
  qs::c_qsave(b,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/b.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "b values: "<< b << std::endl;
  NumericVector ymax(1);
  ymax[0]  = RcppDeepState_double();
  qs::c_qsave(ymax,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/ymax.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ymax values: "<< ymax << std::endl;
  NumericVector t  = RcppDeepState_NumericVector();
  qs::c_qsave(t,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/t.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "t values: "<< t << std::endl;
  IntegerVector m(1);
  m[0]  = RcppDeepState_int();
  qs::c_qsave(m,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/m.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "m values: "<< m << std::endl;
  IntegerVector thin(1);
  thin[0]  = RcppDeepState_int();
  qs::c_qsave(thin,"/home/akhila/fuzzer_packages/fuzzedpackages/DPWeibull/inst/testfiles/noreg/inputs/thin.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "thin values: "<< thin << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    noreg(burnin[0],iteration[0],tl,tr,delta,pi,c,nm,alpha,lambda,lambda0,alpha00[0],alpha0[0],lambda00[0],alphaalpha[0],alphalambda[0],nu,ngrp,a[0],b[0],ymax[0],t,m[0],thin[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
