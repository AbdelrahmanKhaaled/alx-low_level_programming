#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: finds and prints the sum of the even-valued terms,
 * followed by a new line..
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i = 1, k = 0, l = 1, sum = 0;

	while ((k + l) <= 4000000)
	{
		if (((k + l) % 2) == 0)
			sum += k + l;
		if ((i % 2) != 0)
			k = k + l;
		else
			 l = k + l;
		 i++;
	}
	print("%d\n", (k + l));

	return (0);
}
