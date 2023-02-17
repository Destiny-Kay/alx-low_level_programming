#include <stdio.h>
/**
 *main - entry point 
 *return 0 - success
 */
int main ()
{
  char c;
  char u;
  c = 'a';
  u = 'A';

  while (c <= 'z')
    {
      putchar(c);
    }
  while (u <= 'Z')
    {
      putchar(u);
    }
  putchar('\n');
  return 0;
 
}
