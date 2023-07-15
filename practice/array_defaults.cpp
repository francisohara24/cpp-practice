//
// Created by Francis O'Hara Aidoo on 7/15/2023.
//
// Task: Figure out the default values of a declared but uninitialized array.

#include <iostream>

int main(){
    int arr[4];
    int a;
    std::string b;
    char c;

    std::cout<< "Value of uninitialized integer variable: " << a << std::endl;
    std::cout<< "Value of uninitialized string variable: " << b << std::endl;
    std::cout<< "Value of uninitialized character variable: " << c << std::endl;
    std::cout<<"Value at Position 0 of uninitialized integer array: " <<arr[0] << std::endl;


    std::cout<< (a == 1?"true":"false")<< std::endl;  // check if default value of integer variable is indeed 1

    std::cout<< (b == ""?"true":"false");  // check if default value of std::string is indeed empty string

    return 0;
}

/*
 * lesson: value of uninitialized array is actually compiler dependent :)
    - for MinGW compiler, value is random integer.
 * Lesson: value of uninitialized int is 1
 * Lesson: value of uninitialized string is empty string.
 * Lesson: value of uninitialized character can be confusing.
*/