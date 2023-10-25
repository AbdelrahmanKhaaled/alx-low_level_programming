#include "main.h"

/**
 * _puts_recursion -  prints a string, followed by a new line.
 *
 * @s: checks input of function
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_putchar('\n');
	}
	else
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
}
