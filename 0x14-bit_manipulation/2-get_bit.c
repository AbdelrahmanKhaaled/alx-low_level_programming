#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: checks input of function
 * @index: checks input of function
 *
 * Return: returns the value of a bit at a given index.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int length;
	int num;

	length = 0;
	num = n;
	while (num)
	{
		if (length == index)
			return (num % 2);
		num = num / 2;
		length++;
	}
	if (length != index + 1)
	{
		return (-1);
	}
}
