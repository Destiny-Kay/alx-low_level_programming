#include "main.h"

/**
 * append_text_to_file- appends text to a file
 * @filename: the name of the file
 * @text_content: the content to be appended to the file
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int wrtext;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		wrtext = write(fd, text_content, letters);

		if (wrtext == -1)
			return (-1);
	}

	close(fd);

	return (1);
}