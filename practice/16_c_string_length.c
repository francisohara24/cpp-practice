/**
 * File Name:   16_c_string_length.c
 * Description: Implement Python's len() built-in function for C strings.
 * Author:      Francis O'Hara
 * Date:        3/25/25
 */

#include <stdio.h>


/**
 *  @brief Returns the length of the given string.
 *
 * @param string pointer to the first character of the string whose length is to be returned.
 * @return an integer representing the length of the given string.
 */
int len(char *string) {
    int length = 0;
    char *ptr = string;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    return length;
}

int main() {
    char string1[] = "12345"; // length: 5
    char string2[] = "123456789"; // length: 9

    printf("length of string1: %d\n", len(string1));
    printf("length of string2: %d\n", len(string2));
    return 0;
}
