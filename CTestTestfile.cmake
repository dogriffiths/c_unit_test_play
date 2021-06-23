# CMake generated Testfile for 
# Source directory: /Users/davidg/CLionProjects/untitled7
# Build directory: /Users/davidg/CLionProjects/untitled7
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[run_tests]=] "test_app")
set_tests_properties([=[run_tests]=] PROPERTIES  _BACKTRACE_TRIPLES "/Users/davidg/CLionProjects/untitled7/CMakeLists.txt;22;add_test;/Users/davidg/CLionProjects/untitled7/CMakeLists.txt;0;")
add_test([=[run_tests2]=] "test_app2")
set_tests_properties([=[run_tests2]=] PROPERTIES  _BACKTRACE_TRIPLES "/Users/davidg/CLionProjects/untitled7/CMakeLists.txt;26;add_test;/Users/davidg/CLionProjects/untitled7/CMakeLists.txt;0;")
subdirs("Unity")
