#include <stdio.h>

/**
 *
 *
 *
 *
 */
int main (void){
  int i;
  int b;
  for (i = 0; i < 10; i++){
    if (i != b){
      putchar(i + '0');
      for (b = 0; b < 10; b++){
	putchar (b + '0');

      }
    }
    printf(" ,");
  }
  return (0);
}
