cmake_minimum_required(VERSION 3.10)

project(test_sfml)

find_package(SFML REQUIRED COMPONENTS system window graphics network audio)

add_executable(main main.cpp)

target_link_libraries(main sfml-graphics sfml-window sfml-system sfml-network sfml-audio)
