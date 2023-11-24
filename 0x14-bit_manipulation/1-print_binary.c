#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: checks input of function
 *
 * Return: void.
*/

void print_binary(unsigned long int n)
{
	unsigned long int number, number2, counter;
	int length;
	bool flag = false;

	number = 0;
	number2 = 1;
	while(n)
	{
		counter = n;
		n *= .5;
		if (counter - (n * 2) + 48 == '0')
		{
			flag = true;
			length++;
		}
		else
		{
			for (int i = 0 ; i < length ; i++)
			{
				number2 *= 10;
			}
			flag = false;
			length++;
			if(number2 == 1)
				number += (counter - (n * 2));
			else
			{
				number = number + number2;
				number2 = 1;
			}
		}
	}
	if (flag)
	{
		for (int i = 0 ; i < length - 1; i++)
			number *= 10;
	}               
}