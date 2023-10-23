#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 *
 * @a: checks input of function
*/

void print_chessboard(char (*a)[8])
{
	unsigned long int i;
	int j;

	for (i = 0 ; i < strlen(a[8]) ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
