#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>

/**
 * read_textfile- reads a text file and prints it ton the STDOUT
 * @filename: name of  the file to be read
 * @letters: the number of letters it should read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t i = 0, ch;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");

	while ((ch = fgetc(fp)) <= letters)
	{
		putchar(ch);
		i++;
	}
	fclose(fp);
	return (i);
}
