#include "main.h"

/**
 * times_table - prints the nine times table, starting with zero.
*/

void times_table(void)
{
	int i, j, res;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar('0');
		for (j = 1 ; j <= 9 ; j++)
		{
			res = i * j;

			_putchar(',');
			_putchar(' ');
			if (res <= 9)
				_putchar(' ');

			if (res > 9)
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
