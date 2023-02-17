#include <stdio.h>
/**
 *main - entry point
 *return 0- success
 *
 */
int main ()
{
  char c;
  c = 'a';

  while (c <= 'z')
    {
      if ((c != 'q' && c != 'e') && c <= 'z')
	{
	  putchar(c);
	  c++;
	}
    }
  putchar('\n');
  return (0);
}
