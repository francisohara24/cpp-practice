//
// Created by franc on 1/8/2025.
// Link: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
//

#include <iostream>
#include <cmath>

void update(int *a, int *b) {
    int a_old = *a;
    *a = a_old + *b;
    *b = abs(a_old - *b);
}


int main() {
    int a, b;
    printf("Enter two space separated integers a and b:");
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("a: %d\nb: %d", a, b);
    return 0;
}
