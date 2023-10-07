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
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
