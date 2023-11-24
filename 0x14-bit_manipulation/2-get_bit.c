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
	int length;
	
	length = 0;
	while (n)
	{		
		if (length == index)
			return (n % 2);
		n = n / 2;
		length++;
	}
	if (length - 1 != index)
	{
		return (-1);
	}
}
