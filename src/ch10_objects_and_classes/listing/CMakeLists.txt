SET(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")

add_library(stock00 stock00.cpp)
add_executable(10_1 usestok0.cpp)
target_link_libraries(10_1 stock00)

add_library(stock10 stock10.cpp)
add_executable(10_6 usestok1.cpp)
target_link_libraries(10_6 stock10)

add_library(stock20 stock20.cpp)
add_executable(10_9 usestok2.cpp)
target_link_libraries(10_9 stock20)

add_library(stack stack.cpp)
add_executable(10_12 stacker.cpp)
target_link_libraries(10_12 stack)

