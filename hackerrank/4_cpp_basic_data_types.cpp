//
// Created by franc on 1/2/2025.
// Link: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true
//

# include <iostream>

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;

    printf("Enter input values separated by spaces:\t");
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%f\n%lf", a, b, c, d, e);
    return 0;
}
