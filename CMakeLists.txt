cmake_minimum_required(VERSION 3.23)
project(cpp_practice)

set(CMAKE_CXX_STANDARD 23)


add_executable(main.cpp hackerrank/1_cpp_hello_world.cpp main.cpp practice/c_style_concat.cpp practice/string_streams.cpp hackerrank/2_cpp_input_and_output.cpp hackerrank/3_c_tutorial_conditional_if_else.cpp practice/enums.cpp practice/array_defaults.cpp practice/array_initialization.cpp practice/array_length.cpp
        practice/7_switch_statement_refresher.cpp
        hackerrank/4_cpp_basic_data_types.cpp
        hackerrank/5_c_tutorial_for_loop.cpp
        hackerrank/6_c_tutorial_functions.cpp
        hackerrank/7_c_tutorial_pointer.cpp
        hackerrank/8_arrays_introduction.cpp
        hackerrank/9_variable_sized_arrays.cpp)
