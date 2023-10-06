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
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		if (ch == 'a')
			putchar('\n');
		ch--;
	}
	return (0);
}
