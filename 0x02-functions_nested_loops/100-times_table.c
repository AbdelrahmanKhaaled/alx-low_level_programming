#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0.
 *
 * @n: checks input of function
*/

void print_times_table(int n)
{
	int i, j, res;

	if (n <= 15 && n >= 0)
	{
		for (i = 0 ; i <= n ; i++)
		{
			_putchar('0');
			for (j = 1 ; j <= n ; j++)
			{
				res = i * j;

				_putchar(',');
				if(res <= 99)
				{
					_putchar(' ');
					if (res <= 9)
						_putchar(' ');
				}
					_putchar(' ');

				if (res > 9)
				{
					if (res > 99)
						_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
				
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
