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
	char *s;
	int num2, i = 0;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
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
	while(num2)
	{
		*s++ = num2 % 10 ;
		num2 /= 10;
		i++;
	}
	while(--i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
