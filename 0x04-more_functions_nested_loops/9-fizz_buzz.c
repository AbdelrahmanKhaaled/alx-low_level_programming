#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the numbers from one to hundered,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz ");
		else if (((i % 5) == 0) && !((i % 3) == 0))
		{
			if (i == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}
		else if (((i % 3) == 0) && !((i % 5) == 0))
			printf("Fizz ");
		else
			printf("%d ", i);
	}

	return (0);
}
