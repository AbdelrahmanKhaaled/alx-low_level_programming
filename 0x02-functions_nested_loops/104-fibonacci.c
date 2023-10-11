#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i;
	long int k = 0, l = 1;

	for (i = 1 ; i <= 98 ; i++)
	{
		printf("%ld, ", (k + l));
		if ((i % 2) != 0)
			k = k + l;
		else
			l = k + l;
	}
	printf("%ld\n", (k + l));

	return (0);
}
