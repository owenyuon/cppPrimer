SET(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")

add_library(mytime0 mytime0.cpp)
add_executable(11_3 usetime0.cpp)
target_link_libraries(11_3 mytime0)

add_library(mytime1 mytime1.cpp)
add_executable(11_6 usetime1.cpp)
target_link_libraries(11_6 mytime1)


