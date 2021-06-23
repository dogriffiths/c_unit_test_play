cmake_minimum_required(VERSION 3.19)
project(untitled7 C)

set(CMAKE_C_STANDARD 99)

file(GLOB sources "${PROJECT_SOURCE_DIR}/*.c")
add_executable(untitled7 ${sources})

# Add unit testing
include(CTest)
add_subdirectory(Unity)
add_library(Unity STATIC Unity/src/unity.c)
target_include_directories(Unity PUBLIC src)

file(GLOB testables "${PROJECT_SOURCE_DIR}/*.c")
list(REMOVE_ITEM testables "${PROJECT_SOURCE_DIR}/main.c")
#file(GLOB test_sources "${PROJECT_SOURCE_DIR}/test/*.c")

#add_executable(test_app ${test_sources} ${testables})
add_executable(test_app test/test_greetings.c ${testables})
target_link_libraries(test_app Unity)
add_test(run_tests test_app)

add_executable(test_app2 test/test_utils.c ${testables})
target_link_libraries(test_app2 Unity)
add_test(run_tests2 test_app2)
