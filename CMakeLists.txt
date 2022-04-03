cmake_minimum_required (VERSION 3.21)
project (TEST CXX)

set (CMAKE_CXX_STANDARD 14)

add_executable(main main.cpp)
target_include_directories(main PRIVATE ${PROJECT_SOURCE_DIR}/src)

enable_testing ()
add_subdirectory (test)
