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
	int j = 0;
	int k = 0;
	int n = 0;

	while (i <= 9)
	{
		while (j <= 9)
		{
			while (k <= 9)
			{
				while (n <= 9)
				{
					if (n > j || k > i)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(n + '0');
					if (!(i == 9 && j == 8 && k == 9 && n == 9))
					{
						putchar(',');
						putchar(' ');
					}
					}
					n++;
				}
				k++;
				n = 0;
			}
			j++;
			k = 0;
		}
		i++;
		j = 0;
	}
	putchar('\n');
	return (0);
}
