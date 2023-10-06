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
		printf("negative\n");
	}
	else if (n == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("positive\n");
	}
	return (0);
}
