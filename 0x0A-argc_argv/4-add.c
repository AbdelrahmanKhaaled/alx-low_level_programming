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

int main(int argc, char *argv[])
{
	int sum;
	char *c;

	sum = 0;
	while (--argc)
	{
		for (c = argv[argc] ; *c ; c++)
			if (*c < '0' && *c > '9')
			{
				printf("Error\n");
				return (0);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
