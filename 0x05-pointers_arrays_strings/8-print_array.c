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

	for (i = 0 ; i < n - 2; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
