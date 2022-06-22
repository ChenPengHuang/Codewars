//
// Created by ChenPengHuang on 2022/6/20.
// https://www.codewars.com/kata/5679aa472b8f57fb8c000047/train/cpp
#include <vector>
using namespace std;

int find_even_index(const vector<int> numbers) {
    for (int n = 0; n < numbers.size(); n++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < n; j++) {
            leftSum += numbers[j];
        }
        for (int k = n + 1; k < numbers.size(); k++) {
            rightSum += numbers[k];
        }
        if (leftSum == rightSum) {
            return n;
        }
        n++;
    }
    return -1;
}

