cmake_minimum_required (VERSION 3.2)
project (my_main)

#set(BUILD_SHARED_LIBS TRUE)

#set(Boost_USE_STATIC_LIBS OFF)
#set(Boost_USE_MULTITHREADED ON)
#set(Boost_USE_STATIC_RUNTIME OFF)

find_package(
    Boost
    COMPONENTS
        filesystem
        system
    REQUIRED
)

add_executable(m1 src/m1.cpp)

add_subdirectory("libs/liba")
add_subdirectory("libs/libb")

message(STATUS "boost libs: ${Boost_LIBRARIES}")

target_include_directories(m1 PUBLIC ${Boost_INCLUDE_DIRS})

if(WIN32)
    add_definitions(${Boost_LIB_DIAGNOSTIC_DEFINITIONS})
    target_compile_definitions(m1 PUBLIC -DBOOST_ALL_DYN_LINK)
    target_link_libraries(m1 Boost::filesystem)
    #target_link_directories(m1 PUBLIC ${Boost_LIBRARIES})
else()
    target_link_libraries(m1 ${Boost_LIBRARIES} dl)
endif()
