#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 *
 * @n: checks input of function
*/

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i <= n ; i++)
			_putchar(i);
		_putchar('\n');
	}
	else
	{
		for (i = n ; i >= n ; i--)
			_putchar(i);
		_putchar('\n');
	}
}
