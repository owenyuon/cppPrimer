SET(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")

add_library(stock stock00.cpp)

add_executable(10_1 usestok0.cpp)

target_link_libraries(10_1 stock)

