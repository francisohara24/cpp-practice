//
// Created by franc on 1/7/2025.
// Link: https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
//

#include <iostream>

int max_of_four(int a, int b, int c, int d) {
    int max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    if (d > max)
        max = d;

    return max;
}

int main() {
    int a, b, c, d;
    printf("Enter four space separated numbers:\t");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("The maximum of %d, %d, %d, and %d is %d\n", a, b, c, d, max_of_four(a, b, c, d));
    return 0;
}