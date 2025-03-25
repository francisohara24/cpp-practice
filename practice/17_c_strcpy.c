/**
 * File Name:   17_c_strcpy.c
 * Description: Check how the strcpy function of the String.h library works in C.
 * Author:      Francis O'Hara
 * Date:        3/25/25
 */
#include <stdio.h>
#include <string.h>

int main() {
    char *string = "hello!\0There are more characters after a null terminator!";
    char destination[100];
    strcpy(destination, string);
    printf("Is destination[5] equal to '!'? %s\n", destination[5]=='!'?"Yes":"No");
    printf("Is destination[6] equal to '\\0'? %s\n", destination[6]=='\0'?"Yes":"No");
    printf("Is destination[7] equal to 'T'? %s\n", destination[7]=='T'?"Yes":"No");
}

/**
 * Conclusions:
 *      1. strcpy() copies all characters from source until null terminator(including the null terminator character).
 *      2. Under normal circumstances, every source string should have a null terminator character appending it.
 *      3. If precise copying of characters of a string to another memory location without copying null terminator is required
 *         then strcpy() cannot be relied on and one must use character pointers for custom ways of copying the string's characters
 *         to the destination.
 */