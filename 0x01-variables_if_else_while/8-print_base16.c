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
	char ch;

	while (n <= 9)
	{
		putchar(n + '0');
	}

	ch = 'A';
	while (ch <= 'F')
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
