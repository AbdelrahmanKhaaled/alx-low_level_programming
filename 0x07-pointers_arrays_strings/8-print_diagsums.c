#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 *
 * @a: checks input of function
 * @size: checks input of function
*/

void print_diagsums(int *a, int size)
{
	int i, j, sum, sum2;

	sum = sum2 = 0;
	for (i = 0 ; i < size ; i++)
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
				sum += *(a + (i * size + j));
			if ((i + j) == size - 1)
				sum2 += *(a + (i * size + j));
		}
	printf("%d, %d\n", sum, sum2);
}
