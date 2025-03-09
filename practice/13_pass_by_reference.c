/**
 * File Name:   13_pass_by_reference.c
 * Description: Program to test how passing by reference works using a method for swapping variable values.
 * Author:      Francis O'Hara
 * Date:        3/6/25
 */
#include <stdio.h>

void swap1(int *ptr_a, int *ptr_b) {
    int *ptr_c = ptr_a;
    ptr_a = ptr_b;
    ptr_b = ptr_c;
}

void swap2(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    // test swap1
    int a = 1;
    int b = 3;
    printf("Values before swap1:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    swap1(&a, &b);

    printf("Values after swap1:\n");
    printf("a: %d\n", a);
    printf("b: %d\n\n", b);

    // test swap2
    a = 1;
    b = 3;
    printf("Values before swap2:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    swap2(&a, &b);

    printf("Values after swap2:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
}

/*
 * Conclusion
 * The parameter's of a function that supports pass by reference are simply pointer variables that store the memory
 * addresses to be passed as argument to the function.
 * Altering the values of these parameter's therefore does not do anything to variables outside the function (i.e. the
 * variables whose references were passed as argument to the function.)
 */
