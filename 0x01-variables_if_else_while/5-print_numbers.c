#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints single digit numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%i", n);
		n++;
		if (n == 9)
			putchar('\n');
	}
	return (0);
}
