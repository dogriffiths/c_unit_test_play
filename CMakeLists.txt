cmake_minimum_required(VERSION 3.19)
project(untitled7 C)

set(CMAKE_C_STANDARD 99)

#if ("${CMAKE_C_COMPILER_ID}" MATCHES " (Apple) ?[Cc}Lang” ‘OR " ${CHAKE_CXX_COMPILER_ID}"" MATCHES “ (Apple) ?[Cc] lang")
#    message("Building with Uvm Code Coverage Tools")
#    set (CMAKE_CXX_FLAGS "'-fprofile-instr-generate -fcoverage-mapping")
#elseif (CHAKE_COMPILER_IS_GNUCKX)
#    message(""Building with Lcov Code Coverage Tools")
#    set(CMAKE_CXX_FLAGS "-coverage")
#endif ()

file(GLOB sources "${PROJECT_SOURCE_DIR}/*.c")
add_executable(untitled7 ${sources})

# Add unit testing
include(CTest)
add_subdirectory(Unity)
add_library(Unity STATIC Unity/src/unity.c)
target_include_directories(Unity PUBLIC src)

file(GLOB testables "${PROJECT_SOURCE_DIR}/*.c")
list(REMOVE_ITEM testables "${PROJECT_SOURCE_DIR}/main.c")

add_executable(test_app test/test_greetings.c ${testables})
target_link_libraries(test_app Unity)
add_test(run_tests test_app)

add_executable(test_app2 test/test_utils.c ${testables})
target_link_libraries(test_app2 Unity)
add_test(run_tests2 test_app2)
