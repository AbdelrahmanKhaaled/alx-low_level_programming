#include "function_pointers.h"

/**
 * main - Entry point
 *
 * @argc: number of arguments.
 * @argv: arguments.
 *
 * Return: 0 (Success)
*/

int main(int argc, char **argv)
{
	char *p = (char *)main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i--)
	{
		printf("%02hhx%s", *p++, i ? " " : "\n");
	}

	return (0);
}
