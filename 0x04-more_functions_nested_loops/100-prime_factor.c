#include <stdio.h>

/**
 * isPrime - checks number if a prime or not.
 *
 * @num: checks input of function
 *
 * Return: returns 1 if 'num' is prime
 *     otherwise always 0 (Success)
*/

int isPrime(int num)
{
	if (num <= 1)
		return (0);

	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return (0);

	}
	return (1);
}

/**
 * main - Entry point
 *
 * Description: finds and prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int number = 2;
	long long int num = 612852475143;

	while (1 > 0)
	{
		if (isPrime(number))
		{
			if ((num / number) == 1)
			{
				printf("%d\n", number);
				break;
			}
			else if ((num % number) == 0)
				num /= number;
			else
				number++;
		}
	}

	return (0);
}
