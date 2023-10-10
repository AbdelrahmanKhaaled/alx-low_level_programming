#include "main.h"

/**
 * print_sign - print one if number is positive or
 *  zero if number equal to zero or -one if number is negative
 *
 * @n: checks input of function
 *
 * Return: returns 1 if 'n' is greater than zero
 *    or  returns 0 if 'n' is equal to zero
 *    or returns -1 if 'n' is less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
