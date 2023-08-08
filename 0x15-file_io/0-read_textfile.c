#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>

/**
 * read_textfile- reads a text file and prints it ton the STDOUT
 * @filename: name of  the file to be read
 * @letters: the number of letters it should read and print
 * Return: number of letters printed, 0 if it fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nread = read(fd, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	close(fd);

	free(buffer);

	return (nwrite);
}
