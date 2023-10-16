#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: checks input of function.
*/

void print_rev(char *s)
{
	int i;

	printf("%d\n", strlen(s));
	for (i = strlen(s) - 2; i >= 0 ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
