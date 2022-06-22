//
// Created by ChenPengHuang on 2022/6/20.
// https://www.codewars.com/kata/5287e858c6b5a9678200083c/solutions/cpp
#include <cmath>
#include <iostream>
using namespace std;

bool narcissistic2( int value ){
    string str = std::to_string(value);
    int len = str.length();
    int sum = 0;
    for(int i=0 ; i<len ; i++){
        sum += pow(str[i] - '0' , len);
    }
    return sum == value;
}