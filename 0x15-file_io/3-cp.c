#include "main.h"

/**
 * main - Entry point
 *
 * Description: copies the content of a file to another file.
 *
 * @argc: checks input of function
 * @argv: checks input of function
 *
 * Return: things (Success)
*/

int main(int argc, char **argv)
{
	int fd;
	ssize_t bytes;

	if (argc < 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	if (argv[2])
	{
		argv[2] = "";
	}
	if (!argv[1])
	{
		write(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n", 45);
		exit(98);
	}
	fd = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
		return (-1);
	bytes = write(fd, argv[2], strlen(argv[2]));
	if (bytes)
	{
		write(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n", 39);
		exit(99);
	}
	if (bytes == -1)
		return (-1);
	if (close(fd))
	{
		write(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n", 31);
		exit(100);
	}
	return (1);
}
