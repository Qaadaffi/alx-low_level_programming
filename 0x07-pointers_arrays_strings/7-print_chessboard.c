#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - is a function that prints the chessboard
 * @a: a two-dimensional array to be printed
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; b++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
