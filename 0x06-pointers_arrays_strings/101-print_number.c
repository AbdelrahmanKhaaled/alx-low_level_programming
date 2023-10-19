#include "main.h"

/**
 * print_number -  prints an integer.
 *
 * @n: checks input of function
*/

void print_number(int n)
{
	if (n >= 0)
	{
		if (n > 9)
			print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else
	{
		n = -n;
		_putchar('-');
		if (n > 9)
			print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
