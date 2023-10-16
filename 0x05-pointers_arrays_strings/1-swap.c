#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 *
 * @a: checks input as pointer of function
 * @b: checks input as pointer of function
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
