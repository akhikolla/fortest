// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// var_alpha_DeepState_TestHarness_generation.cpp and var_alpha_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double var_alpha(const double alpha, const NumericVector& non_zero_theta, const NumericVector& norm, const NumericVector& f, const double& PA_offset, const NumericVector& theta, const NumericMatrix& degree, const NumericVector& m_t, const NumericVector& Sum_m_k, const NumericMatrix& offset_tk, const double& offset);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector alpha(1);
  alpha[0]  = RcppDeepState_double();
  qs::c_qsave(alpha,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/var_alpha/inputs/alpha.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "alpha values: "<< alpha << std::endl;
  NumericVector non_zero_theta  = RcppDeepState_NumericVector();
  qs::c_qsave(non_zero_theta,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/var_alpha/inputs/non_zero_theta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "non_zero_theta values: "<< non_zero_theta << std::endl;
  NumericVector norm  = RcppDeepState_NumericVector();
  qs::c_qsave(norm,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/var_alpha/inputs/norm.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "norm values: "<< norm << std::endl;
  NumericVector f  = RcppDeepState_NumericVector();
  qs::c_qsave(f,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/var_alpha/inputs/f.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "f values: "<< f << std::endl;
  NumericVector PA_offset(1);
  PA_offset[0]  = RcppDeepState_double();
  qs::c_qsave(PA_offset,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/var_alpha/inputs/PA_offset.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "PA_offset values: "<< PA_offset << std::endl;
  NumericVector theta  = RcppDeepState_NumericVector();
  qs::c_qsave(theta,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/var_alpha/inputs/theta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "theta values: "<< theta << std::endl;
  NumericMatrix degree  = RcppDeepState_NumericMatrix();
  qs::c_qsave(degree,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/var_alpha/inputs/degree.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "degree values: "<< degree << std::endl;
  NumericVector m_t  = RcppDeepState_NumericVector();
  qs::c_qsave(m_t,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/var_alpha/inputs/m_t.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "m_t values: "<< m_t << std::endl;
  NumericVector Sum_m_k  = RcppDeepState_NumericVector();
  qs::c_qsave(Sum_m_k,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/var_alpha/inputs/Sum_m_k.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Sum_m_k values: "<< Sum_m_k << std::endl;
  NumericMatrix offset_tk  = RcppDeepState_NumericMatrix();
  qs::c_qsave(offset_tk,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/var_alpha/inputs/offset_tk.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "offset_tk values: "<< offset_tk << std::endl;
  NumericVector offset(1);
  offset[0]  = RcppDeepState_double();
  qs::c_qsave(offset,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/var_alpha/inputs/offset.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "offset values: "<< offset << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    var_alpha(alpha[0],non_zero_theta,norm,f,PA_offset[0],theta,degree,m_t,Sum_m_k,offset_tk,offset[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
