#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print all alphabitcs in lowercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i <= 9)
	{
		while (j <= 9)
		{
			while (k <= 9)
			{
				if (k > j && j > i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (!(i == 7 && j == 8 && k == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
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
