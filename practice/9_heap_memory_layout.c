/**
 * File Name:   heap_memory_layout.c
 * Description: Program to test layout of variables allocated in heap memory.
 *              This program illustrates the concept of byte alignment as each character will be allocated to an address
 *              that is a multiple of 16 (for my system).
 * Author:      Francis O'Hara
 * Date:        2/18/25
 */
#include <stdlib.h>
#include <stdio.h>

int main(int arg, char * argv[]){
  char * character1 = (char *) malloc(sizeof(char));
  char * character2 = (char *) malloc(sizeof(char));
  char * character3 = (char *) malloc(sizeof(char));
  * character1 = 0xA1;
  * character2 = 0xB2;
  * character3 = 0xC3;
  unsigned char * ptr;
  ptr = (unsigned char *) character1;

  for (int i = 0; i < 100; i++) {
    printf("%d: %02X\n", i, ptr[i]);
  }

  free(character1);
  free(character2);
  free(character3);
  return 0;
}