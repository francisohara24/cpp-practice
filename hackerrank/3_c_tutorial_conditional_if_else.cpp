//
// Created by Francis O'Hara Aidoo on 7/8/2023.
//
// link: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem

#include <iostream>

int main() {
    char arr[][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    std::cin>>n;
    if (n >= 1 && n <= 9)
        std::cout<<arr[n-1];
    else
        std::cout<<"Greater than 9";
    return 0;
}