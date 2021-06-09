# CMakeList.txt : CMake project for test, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Cpp_Primer_6th)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	set(CMAKE_C_COMPILER "/usr/bin/clang++")
	set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()
set(CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")

# TODO: Add tests and install targets if needed.
add_subdirectory(src/ch02_setting_out_to_cpp/listing)
add_subdirectory(src/ch02_setting_out_to_cpp/exercises)

add_subdirectory(src/ch03_dealing_with_data/listing)
add_subdirectory(src/ch03_dealing_with_data/exercises)

add_subdirectory(src/ch07_functions_cpp_programming_module/listing)
add_subdirectory(src/ch07_functions_cpp_programming_module/exercises)

add_subdirectory(src/ch10_objects_and_classes/listing)
#add_subdirectory(src/ch10_objects_and_classes/exercises)
