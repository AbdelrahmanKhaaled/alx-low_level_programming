#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print all alphabitcs in lowercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		if (ch == 'Z')
			putchar('\n');
		ch++;
	}
	return (0);
}
