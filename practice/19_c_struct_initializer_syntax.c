/**
 * File Name:   19_c_struct_initializer_syntax.c
 * Description: Program to test syntax for initializing structs in C.
 * Author:      Francis O'Hara
 * Date:        3/26/25
 */

#include <stdio.h>

typedef struct Person {
    char name[50];
    int age;
    float height;
} Person;

int main() {
    Person person1 = {"Mark", 34, 6.5};
    printf("person1 name: %s\n", person1.name);
    printf("person1 age: %d years\n", person1.age);
    printf("person1 height: %0.2f feet\n", person1.height);

    return 0;
}

/**
   Conclusions:
       1. You can initialize all members of a struct with the syntax:
       `structName structInstanceName = {<value for member1>, <value for member2>, ...}`
 */
