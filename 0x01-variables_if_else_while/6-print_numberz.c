#include<stdlib.h>
#include<stdio.h>
/**
 *  main - Entry point
 *
 *   Description: print all alphabitcs in lowercase
 *
 *   Return: 0 (Success)
 */
int main(void)
{
	int n = 0;
	char ch = (char) n;

	while (n <= 9)
	{
		putchar(ch - '0');
		ch++;
		n++;
		if (n == 9)
			putchar('\n');
	}
	return (0);
}