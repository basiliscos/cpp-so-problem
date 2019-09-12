cmake_minimum_required (VERSION 3.2)
project (lib_B)

add_library(B1 SHARED
    src/sample_b.cpp
)
set_target_properties(B1 PROPERTIES OUTPUT_NAME "B1")

add_subdirectory("libs/liba2")
target_compile_definitions(B1 PUBLIC "USING_LIB_A2")
target_link_libraries(B1 A2)
target_include_directories(B1 PUBLIC ${lib_B_SOURCE_DIR}/libs/liba2/src)

