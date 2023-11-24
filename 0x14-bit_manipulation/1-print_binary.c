#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: checks input of function.
*/

void print_binary(unsigned long int n)
{
	unsigned long number, counter;
	int length;
	bool flag = true;

	number = length = 0;
	if (n == 0)
		_putchar('0');
	while (n)
	{
		counter = n;
		n *= .5;
		if (counter - (n * 2) + 48 == '0')
		{
			if (flag)
				length++;
			else
				number *= 10;
		}
		else
		{
			flag = false;
			if (number == 0)
				number += (counter - (n * 2));
			else
			{
				number *= 10;
				number += (counter - (n * 2));
			}
		} }
	while (number)
	{
		counter = number;
		number *= .1;
		_putchar(counter - (number * 10) + 48);	}
	while (length)
	{
		_putchar('0');
		length--; }

}
