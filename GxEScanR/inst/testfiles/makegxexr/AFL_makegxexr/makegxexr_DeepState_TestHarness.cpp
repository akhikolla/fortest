// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// makegxexr_DeepState_TestHarness_generation.cpp and makegxexr_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

void makegxexr(arma::mat& dest, const arma::mat& src1, const arma::mat& src2);

TEST(,){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  std::ofstream dest_stream;
  arma::mat dest  = RcppDeepState_mat();
  dest_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/GxEScanR/inst/testfiles/makegxexr/inputs/dest");
  dest_stream << dest;
  std::cout << "dest values: "<< dest << std::endl;
  dest_stream.close();
  std::ofstream src1_stream;
  arma::mat src1  = RcppDeepState_mat();
  src1_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/GxEScanR/inst/testfiles/makegxexr/inputs/src1");
  src1_stream << src1;
  std::cout << "src1 values: "<< src1 << std::endl;
  src1_stream.close();
  std::ofstream src2_stream;
  arma::mat src2  = RcppDeepState_mat();
  src2_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/GxEScanR/inst/testfiles/makegxexr/inputs/src2");
  src2_stream << src2;
  std::cout << "src2 values: "<< src2 << std::endl;
  src2_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    makegxexr(dest,src1,src2);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
