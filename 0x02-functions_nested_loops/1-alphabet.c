#include<stdlib.h>
#include<stdio.h>
#include <main.h>
/**
 * main - Entry point
 *
 * Description: print all alphabitcs in lowercase using print_alphabet
 *
 * Return: 0 (Success)
*/

void print_alphabet(void);

void print_alphabet(void)
{
	char ch = 'a';

	while (ch < 'z')
	{
		putchar(ch);
		ch++;
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
