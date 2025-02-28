/**
 * File Name:   11_boolean_in_c.c
 * Description: Program to test boolean representation in C.
 * Author:      Francis O'Hara
 * Date:        2/28/25
 */

#include <stdio.h>

int main(){
  char a[] = {};
  float b = 0.0f;
  int c = 1;
  int d = 0;

  if (b){
    printf("`0.0f` evaluates as True.\n");
  }
  else
    printf("`0.0f` evaluates as False.\n");

  if (a) {
    printf("`{}` evaluates as True\n");
  }
  else
    printf("`{}` evaluates as False\n");

  if (c) {
    printf("`1` evaluates as True\n");
  }
  else
    printf("`1` evaluates as False\n");

  if (d) {
    printf("`0` evaluates as True\n");
  }
  else
    printf("`0` evaluates as False\n");


}

/**
 * Conclusions
 * In C, any non-zero value is evaluated as boolean true. All other values (values that evaluate to 0) are evaluated
 * as boolean False.
 */