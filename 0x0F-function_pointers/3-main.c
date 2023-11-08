#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: numbers of arguments.
 * @argv: arguments.
 *
 *   Return: 0 (Success)
*/

int main(int argc, char **argv)
{
	int a, b;
	int (*operation_Fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operation_Fun = get_op_func(argv[2]);
	if (!operation_Fun)
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", operation_Fun(a, b));
	return (0);
}
