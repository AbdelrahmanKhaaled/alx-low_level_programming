#include<stdio.h>
/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0 (Success)
*/

int main(void)
{
	string n;

	scanf("%s", n);
	if (n[strlen(n) - 1] > 5)
	{
		printf("Last digit of %s is %c and is greater than 5", n, n[srtlen(n) - 1])
	}
	else if (n[strlen(n) - 1] == 0)
	{
		printf("Last digit of %s is %c and is 0", n, n[srtlen(n) - 1])
	}
	else if (n[strlen(n) - 1] < 6 && n[strlen(n) - 1] != 0)
	{
		printf("Last digit of %s is %c and is less than 6 and not 0"
		, n, n[srtlen(n) - 1])
	}
	return (0);
}
