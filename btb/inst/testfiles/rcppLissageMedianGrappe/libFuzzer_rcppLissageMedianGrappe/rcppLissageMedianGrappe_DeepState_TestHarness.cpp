// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// rcppLissageMedianGrappe_DeepState_TestHarness_generation.cpp and rcppLissageMedianGrappe_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix rcppLissageMedianGrappe(int iMinObsGrappe, IntegerVector vXObservation, IntegerVector vYObservation, IntegerVector vLigneObservation, IntegerVector vColonneObservation, int iPas, int iRayon, NumericMatrix mVariables, IntegerVector vXCentroide, IntegerVector vYCentroide, IntegerVector vLigneCentroide, IntegerVector vColonneCentroide, NumericVector vQuantile);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  IntegerVector iMinObsGrappe(1);
  iMinObsGrappe[0]  = RcppDeepState_int();
  std::string iMinObsGrappe_t = "/home/akhila/fuzzer_packages/fuzzedpackages/btb/inst/testfiles/rcppLissageMedianGrappe/libFuzzer_rcppLissageMedianGrappe/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_iMinObsGrappe.qs";
  qs::c_qsave(iMinObsGrappe,iMinObsGrappe_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "iMinObsGrappe values: "<< iMinObsGrappe << std::endl;
  IntegerVector vXObservation  = RcppDeepState_IntegerVector();
  std::string vXObservation_t = "/home/akhila/fuzzer_packages/fuzzedpackages/btb/inst/testfiles/rcppLissageMedianGrappe/libFuzzer_rcppLissageMedianGrappe/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_vXObservation.qs";
  qs::c_qsave(vXObservation,vXObservation_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vXObservation values: "<< vXObservation << std::endl;
  IntegerVector vYObservation  = RcppDeepState_IntegerVector();
  std::string vYObservation_t = "/home/akhila/fuzzer_packages/fuzzedpackages/btb/inst/testfiles/rcppLissageMedianGrappe/libFuzzer_rcppLissageMedianGrappe/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_vYObservation.qs";
  qs::c_qsave(vYObservation,vYObservation_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vYObservation values: "<< vYObservation << std::endl;
  IntegerVector vLigneObservation  = RcppDeepState_IntegerVector();
  std::string vLigneObservation_t = "/home/akhila/fuzzer_packages/fuzzedpackages/btb/inst/testfiles/rcppLissageMedianGrappe/libFuzzer_rcppLissageMedianGrappe/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_vLigneObservation.qs";
  qs::c_qsave(vLigneObservation,vLigneObservation_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vLigneObservation values: "<< vLigneObservation << std::endl;
  IntegerVector vColonneObservation  = RcppDeepState_IntegerVector();
  std::string vColonneObservation_t = "/home/akhila/fuzzer_packages/fuzzedpackages/btb/inst/testfiles/rcppLissageMedianGrappe/libFuzzer_rcppLissageMedianGrappe/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_vColonneObservation.qs";
  qs::c_qsave(vColonneObservation,vColonneObservation_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vColonneObservation values: "<< vColonneObservation << std::endl;
  IntegerVector iPas(1);
  iPas[0]  = RcppDeepState_int();
  std::string iPas_t = "/home/akhila/fuzzer_packages/fuzzedpackages/btb/inst/testfiles/rcppLissageMedianGrappe/libFuzzer_rcppLissageMedianGrappe/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_iPas.qs";
  qs::c_qsave(iPas,iPas_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "iPas values: "<< iPas << std::endl;
  IntegerVector iRayon(1);
  iRayon[0]  = RcppDeepState_int();
  std::string iRayon_t = "/home/akhila/fuzzer_packages/fuzzedpackages/btb/inst/testfiles/rcppLissageMedianGrappe/libFuzzer_rcppLissageMedianGrappe/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_iRayon.qs";
  qs::c_qsave(iRayon,iRayon_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "iRayon values: "<< iRayon << std::endl;
  NumericMatrix mVariables  = RcppDeepState_NumericMatrix();
  std::string mVariables_t = "/home/akhila/fuzzer_packages/fuzzedpackages/btb/inst/testfiles/rcppLissageMedianGrappe/libFuzzer_rcppLissageMedianGrappe/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_mVariables.qs";
  qs::c_qsave(mVariables,mVariables_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "mVariables values: "<< mVariables << std::endl;
  IntegerVector vXCentroide  = RcppDeepState_IntegerVector();
  std::string vXCentroide_t = "/home/akhila/fuzzer_packages/fuzzedpackages/btb/inst/testfiles/rcppLissageMedianGrappe/libFuzzer_rcppLissageMedianGrappe/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_vXCentroide.qs";
  qs::c_qsave(vXCentroide,vXCentroide_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vXCentroide values: "<< vXCentroide << std::endl;
  IntegerVector vYCentroide  = RcppDeepState_IntegerVector();
  std::string vYCentroide_t = "/home/akhila/fuzzer_packages/fuzzedpackages/btb/inst/testfiles/rcppLissageMedianGrappe/libFuzzer_rcppLissageMedianGrappe/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_vYCentroide.qs";
  qs::c_qsave(vYCentroide,vYCentroide_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vYCentroide values: "<< vYCentroide << std::endl;
  IntegerVector vLigneCentroide  = RcppDeepState_IntegerVector();
  std::string vLigneCentroide_t = "/home/akhila/fuzzer_packages/fuzzedpackages/btb/inst/testfiles/rcppLissageMedianGrappe/libFuzzer_rcppLissageMedianGrappe/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_vLigneCentroide.qs";
  qs::c_qsave(vLigneCentroide,vLigneCentroide_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vLigneCentroide values: "<< vLigneCentroide << std::endl;
  IntegerVector vColonneCentroide  = RcppDeepState_IntegerVector();
  std::string vColonneCentroide_t = "/home/akhila/fuzzer_packages/fuzzedpackages/btb/inst/testfiles/rcppLissageMedianGrappe/libFuzzer_rcppLissageMedianGrappe/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_vColonneCentroide.qs";
  qs::c_qsave(vColonneCentroide,vColonneCentroide_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vColonneCentroide values: "<< vColonneCentroide << std::endl;
  NumericVector vQuantile  = RcppDeepState_NumericVector();
  std::string vQuantile_t = "/home/akhila/fuzzer_packages/fuzzedpackages/btb/inst/testfiles/rcppLissageMedianGrappe/libFuzzer_rcppLissageMedianGrappe/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_vQuantile.qs";
  qs::c_qsave(vQuantile,vQuantile_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vQuantile values: "<< vQuantile << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    rcppLissageMedianGrappe(iMinObsGrappe[0],vXObservation,vYObservation,vLigneObservation,vColonneObservation,iPas[0],iRayon[0],mVariables,vXCentroide,vYCentroide,vLigneCentroide,vColonneCentroide,vQuantile);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
