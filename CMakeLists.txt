cmake_minimum_required(VERSION 3.17)
project(Codewars)

set(CMAKE_CXX_STANDARD 17)

add_executable(Codewars main.cpp main/codewars/kyu7/string_ends_with.cpp main/codewars/kyu7/you_are_a_square.cpp)