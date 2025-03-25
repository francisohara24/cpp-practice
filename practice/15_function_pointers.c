/**
 * File Name:   15_function_pointers.c
 * Description: Test how function pointers work in C with function polymorphism example.
 * Author:      Francis O'Hara
 * Date:        3/24/25
 */
#include <stdio.h>
#include <stdlib.h>

int doubler(int num){
  return num * 2;
}

void result_printer(int num, int (*func)(int)){
  printf("%d\n", func(num));
}

int main(){
  result_printer(7, doubler);
  printf("`doubler` and `&doubler` are equal? %s\n", doubler == &doubler?"Yes":"No");
  return 0;
}

/**
    Conclusions:
    1. The syntax for function pointers is this: `return_type (* pointer_variable)(list of comma separated parameter types)`
       E.g. void (*func)(int, float, double) = some_function;
    2. The identifier for any function without parentheses is a function pointer to the function.
      I.e. If there exists a function `void foo(){}` then `foo` is a function pointer for the function and is equivalent
      to `&foo`.
*/