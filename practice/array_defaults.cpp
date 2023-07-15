//
// Created by Francis O'Hara Aidoo on 7/15/2023.
//
// Task: Figure out the default values of a declared but uninitialized array.

#include <iostream>

int main(){
    int arr[4];

    std::cout<<"Value at Position 0 of uninitialized integer array: " <<arr[0] << std::endl;



    return 0;
}

// lesson: value is actually compiler dependent :)
// for MinGW compiler, value is random integer.