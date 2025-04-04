/**
 * File Name:   20_c_increment_semantics.c
 * Description: Program to test how current C compiler implements semantics for order in which increment operator is
 *              executed.
 * Author:      Francis O'Hara
 * Date:        4/3/25
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
  int *i = (int *) malloc(5 * sizeof(int));

  for (int n = 0; n < 5; n++){
    i[n] = n;
  }

  *i = *(i++) + *(++i) + *(i++);

  i -= 3;

  for (int n = 0; n < 5; n++) {
    printf("%d ", i[n]);
  }

  return 0;
}