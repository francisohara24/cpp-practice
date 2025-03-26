/**
 * File Name:   18_c_convert_int_to_string.c
 * Description: Method for converting integer into its string representation.
 * Author:      Francis O'Hara
 * Date:        3/25/25
 */

#include <stdio.h>

/**
 * @brief Returns string representation of an integer given a pointer to the integer.
 *
 * @param x a generic pointer that originally points to an integer.
 * @return a pointer to the first character in the string representation of the integer.
 */
char *int_to_string(void *x) {
    int number = *((int *) x);
    int num_digits = 0;
    while (number != 0) {
        number = number / 10;
        num_digits ++;
    }

    char result[num_digits];
    char digit_to_char[10] = "0123456789";
    number = *((int *) x);

    for (int i = 0; i < num_digits; i++) {
        int digit = number % 10;
        result[num_digits - 1 - i] = digit_to_char[digit];
        number = number / 10;
    }
    return result;
}

int main() {
    int a = 789560;
    printf(int_to_string(&a));
    return 0;
}
