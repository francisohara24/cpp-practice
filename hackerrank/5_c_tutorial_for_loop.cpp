//
// Created by franc on 1/3/2025.
// Link: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true
//

#include <iostream>

int main() {
    char english_numbers[][9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b;
    std::cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            std::cout << english_numbers[i - 1] << "\n";
        } else {
            if (i % 2 == 0) {
                std::cout << "even\n";
            } else
                std::cout << "odd\n";
        }
    }

    return 0;
}
