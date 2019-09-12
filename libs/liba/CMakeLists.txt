cmake_minimum_required (VERSION 3.2)
project (lib_A)

add_library(A1 SHARED
    src/sample.cpp
)
set_target_properties(A1 PROPERTIES OUTPUT_NAME "A")
