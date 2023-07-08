//
// Created by Francis O'Hara Aidoo on 6/28/2023.
//
// link: https://www.hackerrank.com/challenges/cpp-input-and-output/problem
#include <cmath>
#include <iostream>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num1;
    int num2;
    int num3;
    int sum;

    std::cin>> num1 >> num2 >>num3;
    sum = num1 + num2 + num3;
    std::cout<< sum;
    return 0;
}
