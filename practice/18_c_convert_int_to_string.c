/**
 * File Name:   18_c_convert_int_to_string.c
 * Description: Method for converting integer into its string representation.
 * Author:      Francis O'Hara
 * Date:        3/25/25
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Returns string representation of an integer given a pointer to the integer.
 *
 * @param x a generic pointer that originally points to an integer.
 * @return a pointer to the first character in the string representation of the integer.
 */
char *int_to_string(void *x) {
    int number = *((int *) x);
    int num_digits = 0;

    if (number == 0) {
        num_digits ++;
    }
    else if (number < 0) {
        number *= -1;
    }

    while (number != 0) {
        number = number / 10;
        num_digits++;
    }

    char *result = (char *) malloc(num_digits + 2);
    char *result_ptr = result;
    number = *((int *) x);

    if (number < 0) {
        *result = '-';
        number *= -1;
        result_ptr++;
    }

    char digit_to_char[10] = "0123456789";

    for (int i = 0; i < num_digits; i++) {
        int digit = number % 10;
        result_ptr[num_digits - 1 - i] = digit_to_char[digit];
        number = number / 10;
    }
    return result;
}

int main() {
    int a = 78956;
    int b = 0;
    int c = -400000910;
    printf("%s\n", int_to_string(&a));
    printf("%s\n", int_to_string(&b));
    printf("%s\n", int_to_string(&c));
    return 0;
}
