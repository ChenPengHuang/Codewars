//
// Created by ChenPengHuang on 2022/6/20.
// https://www.codewars.com/kata/54c27a33fb7da0db0100040e/train/cpp
#include <cmath>

bool is_square(int n) {
    int s = sqrt(n);
    return s * s == n;
}
