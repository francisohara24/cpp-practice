/**
 * File Name:   10_structs_in_memory.c
 * Description: Program to test how structs can be declared and how they are laid out in memory.
 * Author:      Francis O'Hara
 * Date:        2/18/25
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Structure {
    char character1;
    char character2;
    char character3;
    int integer;
} Structure;

int main(int arg, char *argv[]) {
    // declare struct on stack
    Structure structure1;
    structure1.character1 = 0xA1;
    structure1.character2 = 0xB2;
    structure1.character3 = 0xC3;
    structure1.integer = 0xA1B2C3D4;//E5F6A7B8;

    // create direct pointer to struct object.
    unsigned char *ptr1 = (unsigned char *) &structure1;
    printf("Direct Pointer to Struct: %p\n", ptr1);

    // create pointer to `character1` member of struct object
    unsigned char *ptr2 = (unsigned char *) &structure1.character1;
    printf("Pointer to First Member of Struct: %p\n", ptr2);

    // compare pointer addresses
    printf("Are the two pointers equal? %s\n\n", ptr1 == ptr2?"yes":"no");

    // print first 50 bytes of struct to observe memory layout
    printf("First 50 bytes of struct declared on stack memory:\n");
    for (int i = 0; i < 50; i++) {
        printf("%d: %02X\n", i, ptr1[i]);
    }


    // declare struct on heap
    Structure * structure2 = (Structure *) malloc(sizeof(Structure));
    structure2->character1 = (char) 0xA1;
    structure2->character2 = (char) 0xB2;
    structure2->character3 = (char) 0xC3;
    structure2->integer = (int) 0xA1B2C3D4;//E5F6A7B8;

    // create direct pointer to struct object
    unsigned char * ptr3 = (unsigned char *) structure2;
    printf("\nDirect Pointer to Struct: %p\n", ptr3);//ptr3);

    // create pointer to first member of struct
    unsigned char * ptr4 = (unsigned char *) &structure2->character1;
    printf("Pointer to First Member of Struct: %p\n", ptr4);

    // compare pointer addresses
    printf("Are the two pointers equal? %s\n", ptr3 == ptr4?"yes":"no");

    // print first 50 bytes of struct to observe memory layout
    printf("\nFirst 50 bytes of struct declared on heap memory:\n");
    for (int i = 0; i < 50; i ++) {
        printf("%d: %02X\n", i, ptr4[i]);
    }

    free(structure2);
    return 0;
}
/*
    Conclusions:
    1. Struct pointers always point to the first member of the Struct regardless of whether the Struct was declared on the stack or on the heap.
    2. Heap memory addresses allocated using malloc are allocated in increments of 8 or 16 bytes (system dependent) regardless
       of the type of variable the addresses are allocated for.
       For example, if memory is allocated for a char followed by an int using malloc, the memory allocated for the char
       will have an address 8 or 16 bytes from the address of the memory allocated for the int.
    3. Memory allocation on the heap is done in forward order from the earliest allocated memory addresses to the latest allocated memory addresses.
       This is the opposite of what is done on the stack where memory is allocated for variables in reverse order from
       the latest declared variable to the earliest declared variable.
    4. Structs perform byte alignment on their member variables regardless of whether they are stored on the stack or on the heap.
       Memory is allocated for struct members in increments of the size of the largest type within the struct.
*/