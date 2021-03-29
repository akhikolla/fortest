// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// update_f_DeepState_TestHarness_generation.cpp and update_f_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

int update_f(NumericVector& f, const NumericVector& non_zero_f, const NumericMatrix& degree, const NumericVector& theta, const NumericVector& z_j, const NumericVector& normalized_const, const NumericVector& m_t, const double shape, const double rate, const double offset);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector f  = RcppDeepState_NumericVector();
  std::string f_t = "/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_f/libFuzzer_update_f/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_f.qs";
  qs::c_qsave(f,f_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "f values: "<< f << std::endl;
  NumericVector non_zero_f  = RcppDeepState_NumericVector();
  std::string non_zero_f_t = "/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_f/libFuzzer_update_f/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_non_zero_f.qs";
  qs::c_qsave(non_zero_f,non_zero_f_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "non_zero_f values: "<< non_zero_f << std::endl;
  NumericMatrix degree  = RcppDeepState_NumericMatrix();
  std::string degree_t = "/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_f/libFuzzer_update_f/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_degree.qs";
  qs::c_qsave(degree,degree_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "degree values: "<< degree << std::endl;
  NumericVector theta  = RcppDeepState_NumericVector();
  std::string theta_t = "/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_f/libFuzzer_update_f/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_theta.qs";
  qs::c_qsave(theta,theta_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "theta values: "<< theta << std::endl;
  NumericVector z_j  = RcppDeepState_NumericVector();
  std::string z_j_t = "/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_f/libFuzzer_update_f/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_z_j.qs";
  qs::c_qsave(z_j,z_j_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "z_j values: "<< z_j << std::endl;
  NumericVector normalized_  = RcppDeepState_NumericVector();
  std::string normalized_const_t = "/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_f/libFuzzer_update_f/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_normalized_const.qs";
  qs::c_qsave(normalized_const,normalized_const_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "normalized_const values: "<< normalized_const << std::endl;
  NumericVector m_t  = RcppDeepState_NumericVector();
  std::string m_t_t = "/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_f/libFuzzer_update_f/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_m_t.qs";
  qs::c_qsave(m_t,m_t_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "m_t values: "<< m_t << std::endl;
  NumericVector shape(1);
  shape[0]  = RcppDeepState_double();
  std::string shape_t = "/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_f/libFuzzer_update_f/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_shape.qs";
  qs::c_qsave(shape,shape_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "shape values: "<< shape << std::endl;
  NumericVector rate(1);
  rate[0]  = RcppDeepState_double();
  std::string rate_t = "/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_f/libFuzzer_update_f/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_rate.qs";
  qs::c_qsave(rate,rate_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "rate values: "<< rate << std::endl;
  NumericVector offset(1);
  offset[0]  = RcppDeepState_double();
  std::string offset_t = "/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_f/libFuzzer_update_f/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_offset.qs";
  qs::c_qsave(offset,offset_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "offset values: "<< offset << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    update_f(f,non_zero_f,degree,theta,z_j,normalized_const,m_t,shape[0],rate[0],offset[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
