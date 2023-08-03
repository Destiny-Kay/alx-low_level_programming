#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strcpy - copy a string
 *@dest: the destination
 *@src: source value
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}

int main(void)
{
char *src = "this is the source string";
char *dest = "";
char *dest2 = "";

 /*_strcpy(dest, src);*/
 strcpy(dest2, src);

printf("%s", dest);
printf("%s", dest2);
}