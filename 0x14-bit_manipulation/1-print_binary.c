#include "main.h"

/**
 *  - print
 *
 * @args: checks input of function
 *
 * Return: returns number of characters
*/

void print_binary(unsigned long int n)
{
	unsigned int number, length, num, i;

	if (number == 0)
	{
		_putchar('0');
		length++;
		return (length);
	}
	else
	{
		while(num)
		{
			num = num / 2;
			length++;
		}
		char s [length];
		while(number)
		{
			s[i] = (number % 2) + '0';
			number = number / 2;
			i++;
		}
		for (int j = length - 1; j >= 0; j--)
		{
			_putchar(s[j]);
		}
	}
	return (length);
}
