# CMake generated Testfile for 
# Source directory: /data/yaopeng/bmnroot_Yaopeng/macro/run
# Build directory: /data/yaopeng/bmnroot_Yaopeng/build/macro/run
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(run_sim "/home/tools/FairSoft/fairsoft/install/bin/root" "-b" "-q" "-l" "/data/yaopeng/bmnroot_Yaopeng/macro/run/run_sim_bmn.C")
set_tests_properties(run_sim PROPERTIES  PASS_REGULAR_EXPRESSION "Macro finished successfully." TIMEOUT "200" _BACKTRACE_TRIPLES "/data/yaopeng/bmnroot_Yaopeng/macro/run/CMakeLists.txt;1;add_test;/data/yaopeng/bmnroot_Yaopeng/macro/run/CMakeLists.txt;0;")
add_test(run_reco "/home/tools/FairSoft/fairsoft/install/bin/root" "-b" "-q" "-l" "/data/yaopeng/bmnroot_Yaopeng/macro/run/run_reco_bmn.C")
set_tests_properties(run_reco PROPERTIES  PASS_REGULAR_EXPRESSION "Macro finished successfully." TIMEOUT "200" _BACKTRACE_TRIPLES "/data/yaopeng/bmnroot_Yaopeng/macro/run/CMakeLists.txt;5;add_test;/data/yaopeng/bmnroot_Yaopeng/macro/run/CMakeLists.txt;0;")
add_test(run_digi "/home/tools/FairSoft/fairsoft/install/bin/root" "-b" "-q" "-l" "/data/yaopeng/bmnroot_Yaopeng/macro/run/run_reco_bmn.C(\"run6-1889:/nica/data4mpd1/dataBMN/bmndata3/run6/root/digi/bmn_run1889_digi.root\", \"$VMCWORKDIR/macro/run/bmndst_exp.root\", 0, 100)")
set_tests_properties(run_digi PROPERTIES  PASS_REGULAR_EXPRESSION "Macro finished successfully." TIMEOUT "200" _BACKTRACE_TRIPLES "/data/yaopeng/bmnroot_Yaopeng/macro/run/CMakeLists.txt;9;add_test;/data/yaopeng/bmnroot_Yaopeng/macro/run/CMakeLists.txt;0;")
