#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output..
 *
 * @filename: checks input of function
 * @letters: checks input of function
 *
 * Return: returns the actual number of letters it could read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buffer[1024];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);
	close(fd);

	return (bytes);
}
