//
// Created by Francis O'Hara on 10/8/23.
//
// Task: Refresher on switch statements in C and C++
#include <iostream>

int main(){
    int var = 3;
    switch(var) {
        case 1:
          std::cout<<"Hello World!";

        case 2:
            std::cout<<"Hello Earth!";

        case 3:
            std::cout<<"Hello Mars!";

        case 4:
            std::cout<<"Bye Venus!";

        default:
            std::cout<<"You are my world.";
    }
    return 0;
}