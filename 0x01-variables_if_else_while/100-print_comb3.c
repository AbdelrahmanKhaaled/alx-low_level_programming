#include<stdlib.h>
#include<stdio.h>
/**
 *  main - Entry point
 *
 *   Description: print all alphabitcs in lowercase
 *
 *   Return: 0 (Success)
*/

int main(void)
{
	int i = 0;
	int j = 1;

	while (i <= 9)
	{
		while (j <= 9)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (!(j == 9 && i == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
		j = 1;
	}
	putchar('\n');
	return (0);
}
