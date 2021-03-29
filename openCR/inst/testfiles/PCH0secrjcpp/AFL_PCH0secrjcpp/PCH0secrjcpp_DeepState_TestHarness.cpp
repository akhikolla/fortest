// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// PCH0secrjcpp_DeepState_TestHarness_generation.cpp and PCH0secrjcpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector PCH0secrjcpp(int type, int x, int nc, int jj, const IntegerVector cumss, int kk, int mm, int cc0, const IntegerVector PIA0, const NumericVector gk0, int binomN, const NumericMatrix Tsk);

TEST(,){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  IntegerVector type(1);
  type[0]  = RcppDeepState_int();
  std::string type_t = "/home/akhila/fuzzer_packages/fuzzedpackages/openCR/inst/testfiles/PCH0secrjcpp/AFL_PCH0secrjcpp/afl_inputs/" + std::to_string(t) + "_type.qs";
  qs::c_qsave(type,type_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "type values: "<< type << std::endl;
  IntegerVector x(1);
  x[0]  = RcppDeepState_int();
  std::string x_t = "/home/akhila/fuzzer_packages/fuzzedpackages/openCR/inst/testfiles/PCH0secrjcpp/AFL_PCH0secrjcpp/afl_inputs/" + std::to_string(t) + "_x.qs";
  qs::c_qsave(x,x_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  IntegerVector nc(1);
  nc[0]  = RcppDeepState_int();
  std::string nc_t = "/home/akhila/fuzzer_packages/fuzzedpackages/openCR/inst/testfiles/PCH0secrjcpp/AFL_PCH0secrjcpp/afl_inputs/" + std::to_string(t) + "_nc.qs";
  qs::c_qsave(nc,nc_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nc values: "<< nc << std::endl;
  IntegerVector jj(1);
  jj[0]  = RcppDeepState_int();
  std::string jj_t = "/home/akhila/fuzzer_packages/fuzzedpackages/openCR/inst/testfiles/PCH0secrjcpp/AFL_PCH0secrjcpp/afl_inputs/" + std::to_string(t) + "_jj.qs";
  qs::c_qsave(jj,jj_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "jj values: "<< jj << std::endl;
  IntegerVector cumss  = RcppDeepState_IntegerVector();
  std::string cumss_t = "/home/akhila/fuzzer_packages/fuzzedpackages/openCR/inst/testfiles/PCH0secrjcpp/AFL_PCH0secrjcpp/afl_inputs/" + std::to_string(t) + "_cumss.qs";
  qs::c_qsave(cumss,cumss_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cumss values: "<< cumss << std::endl;
  IntegerVector kk(1);
  kk[0]  = RcppDeepState_int();
  std::string kk_t = "/home/akhila/fuzzer_packages/fuzzedpackages/openCR/inst/testfiles/PCH0secrjcpp/AFL_PCH0secrjcpp/afl_inputs/" + std::to_string(t) + "_kk.qs";
  qs::c_qsave(kk,kk_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "kk values: "<< kk << std::endl;
  IntegerVector mm(1);
  mm[0]  = RcppDeepState_int();
  std::string mm_t = "/home/akhila/fuzzer_packages/fuzzedpackages/openCR/inst/testfiles/PCH0secrjcpp/AFL_PCH0secrjcpp/afl_inputs/" + std::to_string(t) + "_mm.qs";
  qs::c_qsave(mm,mm_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "mm values: "<< mm << std::endl;
  IntegerVector cc0(1);
  cc0[0]  = RcppDeepState_int();
  std::string cc0_t = "/home/akhila/fuzzer_packages/fuzzedpackages/openCR/inst/testfiles/PCH0secrjcpp/AFL_PCH0secrjcpp/afl_inputs/" + std::to_string(t) + "_cc0.qs";
  qs::c_qsave(cc0,cc0_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cc0 values: "<< cc0 << std::endl;
  IntegerVector PIA0  = RcppDeepState_IntegerVector();
  std::string PIA0_t = "/home/akhila/fuzzer_packages/fuzzedpackages/openCR/inst/testfiles/PCH0secrjcpp/AFL_PCH0secrjcpp/afl_inputs/" + std::to_string(t) + "_PIA0.qs";
  qs::c_qsave(PIA0,PIA0_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "PIA0 values: "<< PIA0 << std::endl;
  NumericVector gk0  = RcppDeepState_NumericVector();
  std::string gk0_t = "/home/akhila/fuzzer_packages/fuzzedpackages/openCR/inst/testfiles/PCH0secrjcpp/AFL_PCH0secrjcpp/afl_inputs/" + std::to_string(t) + "_gk0.qs";
  qs::c_qsave(gk0,gk0_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "gk0 values: "<< gk0 << std::endl;
  IntegerVector binomN(1);
  binomN[0]  = RcppDeepState_int();
  std::string binomN_t = "/home/akhila/fuzzer_packages/fuzzedpackages/openCR/inst/testfiles/PCH0secrjcpp/AFL_PCH0secrjcpp/afl_inputs/" + std::to_string(t) + "_binomN.qs";
  qs::c_qsave(binomN,binomN_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "binomN values: "<< binomN << std::endl;
  NumericMatrix Tsk  = RcppDeepState_NumericMatrix();
  std::string Tsk_t = "/home/akhila/fuzzer_packages/fuzzedpackages/openCR/inst/testfiles/PCH0secrjcpp/AFL_PCH0secrjcpp/afl_inputs/" + std::to_string(t) + "_Tsk.qs";
  qs::c_qsave(Tsk,Tsk_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Tsk values: "<< Tsk << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    PCH0secrjcpp(type[0],x[0],nc[0],jj[0],cumss,kk[0],mm[0],cc0[0],PIA0,gk0,binomN[0],Tsk);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
