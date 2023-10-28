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
	int i, sum;

	(void)argc;
	i = 1;
	sum = 0;
	while (i < argc)
	{
		if (atoi(argv[i]) != 0)
			sum += atoi(argv[i++]);
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", sum);
	return (0);
}
