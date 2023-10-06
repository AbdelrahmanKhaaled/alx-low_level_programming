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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (!(ch == 'q' || ch == 'e'))
			putchar(ch);
		if (ch == 'z')
			putchar('\n');
	}
	return (0);
}
