//
// Created by Francis O'Hara Aidoo on 7/15/2023.
// Task: figure out way to check the length(no. of elements) in a C++ array.

#include <iostream>
int main(){
    char arr[5]{};  // initialize character array of length 5.

    int arrLength = sizeof(arr)/sizeof(arr[0]);  // check length of array

    std::cout<<"Length of Array:  "<< arrLength<< std::endl;  // print length
    return 0;
}

// solution:
// 1. use sizeof operator to check size of entire array in bytes.
// 2. use sizeof operator to check size of only 1 element in array.
// 3. divide size of entire array by size of 1 element in array.