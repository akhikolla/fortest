// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// Rcpp_D_4cell_DeepState_TestHarness_generation.cpp and Rcpp_D_4cell_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List Rcpp_D_4cell(const arma::mat& Xmat, const arma::mat& Q_res, const arma::mat& q_res);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  std::ofstream Xmat_stream;
  arma::mat Xmat  = RcppDeepState_mat();
  Xmat_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/WRI/inst/testfiles/Rcpp_D_4cell/inputs/Xmat");
  Xmat_stream << Xmat;
  std::cout << "Xmat values: "<< Xmat << std::endl;
  Xmat_stream.close();
  std::ofstream Q_res_stream;
  arma::mat Q_res  = RcppDeepState_mat();
  Q_res_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/WRI/inst/testfiles/Rcpp_D_4cell/inputs/Q_res");
  Q_res_stream << Q_res;
  std::cout << "Q_res values: "<< Q_res << std::endl;
  Q_res_stream.close();
  std::ofstream q_res_stream;
  arma::mat q_res  = RcppDeepState_mat();
  q_res_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/WRI/inst/testfiles/Rcpp_D_4cell/inputs/q_res");
  q_res_stream << q_res;
  std::cout << "q_res values: "<< q_res << std::endl;
  q_res_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    Rcpp_D_4cell(Xmat,Q_res,q_res);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
