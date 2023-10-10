#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: checks input of function
 *
 * Return: returns the last digit of 'n'
*/

int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		_putchar(((n % 10) * -1) + '0');
		return ((n % 10) * -1);

	}
}
