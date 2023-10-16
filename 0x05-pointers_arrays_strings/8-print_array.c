#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: checks input of function
 * @n: checks input of function
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n - 1; i++)
		printf("%d, ", a[i]);
	if (n > 0)
		printf("%d\n", a[n - 1]);
	else
		_putchar('\n');
}
