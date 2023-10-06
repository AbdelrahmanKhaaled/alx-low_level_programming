#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints positive or negative or zero depends on number
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int n;

	scanf("%d", &n);
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is 0\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
