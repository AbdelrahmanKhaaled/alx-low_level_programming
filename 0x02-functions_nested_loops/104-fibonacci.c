#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int fibonacci1 = 1;
	int fibonacci2 = 2;
	int fibonacci3;
	int i;

	printf("%d, ", fibonacci1);
	printf("%d, ", fibonacci2);
	for (i = 3; i < 98; i++)
	{
		fibonacci3 = fibonacci1 + fibonacci2;
		printf("%d, ", fibonacci3);
		fibonacci1 = fibonacci2;
		fibonacci2 = fibonacci3;
	}
	printf("%d\n", (fibonacci1 + fibonacci2));
	return (0);
}
