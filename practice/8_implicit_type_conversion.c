/**
 * File Name:   8_implicit_type_conversion.c
 * Description: Test how implicit type conversion works in C.
 * Author:      Francis O'Hara
 * Date:        2/12/25
 */

#include <stdio.h>

int main(int arg, char *argv[]) {
    float a = 1000000.0f;
    float b = 1000000.0f;
    double c = 1.0;
    printf("%f\n", (a * b) * c);
    printf("%f\n", a * (b * c));
    return 0;
}
