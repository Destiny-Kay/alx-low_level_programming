#include <stdio.h>
/**
 *main - program entry point
 *retuen: (0) -success
 *
 */
int main (void)
{
  int i;
  char c;
  for (i = 0; i < 10; i++)
    {
      putchar(i + '0');
    }
  for (c = 'a'; c <= 'f'; c++)
    {
      putchar(c);
    }
  putchar('\n');
  return (0);
}
