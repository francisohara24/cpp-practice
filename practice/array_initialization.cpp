//
// Created by Francis O'Hara Aidoo on 7/15/2023.
//
// Task: figure out how to represent that an array contains nothing.


#include <iostream>

int main() {
    int arrInitialized[4] = {};  // initialize array of integers
    int arrUninitialized[4];  // uinitialized array of integers

    std::cout << "Initialized:  ";
    for (int elem: arrInitialized)
        std::cout << elem << " ";

    std::cout << std::endl << "Uninitialized:  ";
    for (int elem: arrUninitialized)
        std::cout << elem << " ";
    return 0;
}

// solution: uninitialized array contains random values and cannot be checked
//           Therefore, initialize all array values to 0 or nullptr for array of pointers through the syntax demonstrated above.
