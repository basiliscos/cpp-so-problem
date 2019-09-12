cmake_minimum_required (VERSION 3.2)
project (lib_A2 C)

add_library(A2 SHARED src/sample.cpp)
set_target_properties(A2 PROPERTIES OUTPUT_NAME "A")
