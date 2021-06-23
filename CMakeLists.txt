cmake_minimum_required(VERSION 3.19)
project(untitled7 C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled7 main.c greetings.c)

include(CTest)
add_subdirectory(Unity)
add_library(Unity STATIC Unity/src/unity.c)
target_include_directories(Unity PUBLIC src)
add_executable(test_app test_greetings.c greetings.c)

target_link_libraries(test_app Unity)

add_test(run_tests test_app)

#enable_testing()
#include_directories(${CMAKE_SOURCE_DIR}/Unity/src)

#file(GLOB sources "${PROJECT_SOURCE_DIR}/Unity/src/*.c")
#add_executable(run_tests test_greetings.c greetings.c ${sources})
