#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: checks input of function
 * @text_content: checks input of function
 *
 * Return: returns 1 on success, -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;

	if (!filename || !text_content)
		return (-1);
	fd = open(filename, O_WRONLY | O_EXCL | O_TRUNC, 0222);
	if (fd == -1)
		return (-1);
	bytes = write(fd, text_content, strlen(text_content));
	if (bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
