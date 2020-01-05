# CMakeList.txt : CMake project for test, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Cpp_Primer_6th)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()

set(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")

# TODO: Add tests and install targets if needed.
add_subdirectory(src/ch02_setting_out_to_cpp/listing)
add_subdirectory(src/ch02_setting_out_to_cpp/exercises)

add_subdirectory(src/ch03_dealing_with_data/listing)
add_subdirectory(src/ch03_dealing_with_data/exercises)