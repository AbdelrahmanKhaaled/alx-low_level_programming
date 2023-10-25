#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 *
 * @s: checks input of function
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(++s);
		if (*s != '\0')
			_putchar(*s);
		if (*s == 'F' || (*s == 'T' && s[1] == 'a'))
			_putchar('\n');
	}
}
