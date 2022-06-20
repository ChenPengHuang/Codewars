//
// Created by ChenPengHuang on 2022/6/20.
// https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d/train/cpp
#include <string>

bool solution(std::string const &str, std::string const &ending) {
    if(str.length() < ending.length()){
        return false;
    }
    return str.compare(str.length() - ending.length() , ending.length() , ending) == 0;
}

