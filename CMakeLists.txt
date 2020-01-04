# CMakeList.txt : CMake project for test, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Cpp_Primer_6th)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c+=11")

# TODO: Add tests and install targets if needed.
add_subdirectory(src/ch2_setting_out_to_cpp/listing)
add_subdirectory(src/ch2_setting_out_to_cpp/exercises)
