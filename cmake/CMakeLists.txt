cmake_minimum_required (VERSION 2.8)

project (Demo1)

aux_source_directory(. DIR_SRCS)
add_subdirectory(math)

add_executable(Demo ${DIR_SRCS})

target_link_libraries(Demo math_functions)

enable_testing()
add_test (test_run Demo 5 2)
set_tests_properties (test_run PROPERTIES PASS_REGULAR_EXPRESSION "is 25")
