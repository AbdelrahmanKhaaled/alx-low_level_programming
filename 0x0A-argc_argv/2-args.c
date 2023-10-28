#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints its name, followed by a new line.
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0 (Success)
*/

int main(int argc, char const *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
