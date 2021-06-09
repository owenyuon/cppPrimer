SET(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")

add_library(stock00 stock00.cpp)
add_executable(10_1 usestok0.cpp)
target_link_libraries(10_1 stock00)

add_library(stock10 stock10.cpp)
add_executable(10_6 usestok1.cpp)
target_link_libraries(10_6 stock10)
