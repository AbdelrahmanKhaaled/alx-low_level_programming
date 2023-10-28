
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
	(void)argc;
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");
	return (0);
}
