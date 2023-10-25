#include "main.h"

/**
 * reverse - prints a string in reverse.
 *
 * @s: checks input of function
 * @end: checks input of function
*/

void reverse(char *s, int end)
{
	if (end == 0)
	{
		_putchar(s[end]);
		_putchar('\n');
	}
	else
	{
		_putchar(s[end]);
		reverse(s, --end);
	}
}

/**
 * _print_rev_recursion - prints a string in reverse.
 *
 * @s: checks input of function
*/

void _print_rev_recursion(char *s)
{
	int i;

	i = strlen(s) - 1;
	reverse(s, i);
}
