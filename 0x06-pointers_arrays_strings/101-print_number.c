#include "main.h"

/**
 * print_number -  prints an integer.
 *
 * @n: checks input of function
*/

void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n1 >= 0)
	{
		if (n1 > 9)
			print_number(n1 / 10);
		_putchar((n1 % 10) + '0');
	}
	else
	{
		n1 = -n;
		_putchar('-');
		if (n1 > 9)
			print_number(n1 / 10);
		_putchar((n1 % 10) + '0');
	}
}
