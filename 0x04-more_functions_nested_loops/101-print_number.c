#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: checks input of function
*/

void print_number(int n)
{
	if (n >= 0)
	{
		if (n > 9)
		{
			if (n > 99)
			{
				if (n > 999)
				{
					if (n > 9999)
						_putchar((n / 10000) + '0');
					_putchar(((n / 1000) % 10) + '0');
				}
				_putchar(((n / 100) % 10) + '0');
			}
			_putchar(((n / 10) % 10) + '0');
		}
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar('_');
		if (n < -9)
		{
			if (n < -99)
			{
				if (n < -999)
				{
					if (n < -9999)
						_putchar(((n / 10000) * -1) + '0');
					_putchar((((n / 1000) % 10) * -1) + '0');
				}
				_putchar((((n / 100) % 10) * -1) + '0');
			}
			_putchar((((n / 10) % 10) * -1) + '0');
		}
		_putchar(((n % 10) * -1) + '0');
	}
}
