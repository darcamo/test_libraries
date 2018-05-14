cmake_minimum_required(VERSION 3.10)
project(test_nana)

add_subdirectory(nana)

add_executable(main main.cpp)
target_include_directories(main SYSTEM PUBLIC ./nana/include)
target_link_libraries(main nana)
target_link_libraries(main fontconfig pthread)