#include "main.h"

/**
 *  create_file - creates a file.
 *
 * @filename: checks input of function
 * @text_content: checks input of function
 *
 * Return: returns 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;
	char buffer[1024 * 6];

	if (!text_content)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (write(fd, text_content, strlen(text_content)) == -1)
		return (-1);
	close(fd);

	return (1);
}
