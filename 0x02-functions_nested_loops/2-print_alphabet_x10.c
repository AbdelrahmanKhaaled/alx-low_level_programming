#include "main.h"
/**
 * print_alphabet_x10  - utilizes on the _putchar function
 * to print all alphabet in lowercase ten times
*/

void print_alphabet_x10(void)
{
	int times;
	char ch;

	for (times = 0 ; times <= 9 ; times++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
