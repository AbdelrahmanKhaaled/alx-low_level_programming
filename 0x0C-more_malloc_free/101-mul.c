#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print all alphabitcs in lowercase
 * @argc: checks input of function
 * @argv: checks input of function
 *
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[1]) / 10 == 0 || atoi(argv[2]) / 10 == 0)
	{
		printf("Error\n");
		exit(98);
	}
	num2 = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", num2);
	return (0);
}
