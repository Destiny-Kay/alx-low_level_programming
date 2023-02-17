#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*main function*/
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  printf("Last digit of %d is", n);
  int last_digit = n % 10;
  
  if(last_digit > 5)
    {
      printf("and is greater than 5")
    }
  else if (last_digit == 0)
    {
      printf("and is 0")
    }
  else if (last_digit < 6 && last_digit != 0)
    {
      printf("and is less than 6 and not 0")
    }
  return(0);
}
