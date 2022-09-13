#include "main.h"

/**
 * print_alphabet_X10 - prints ten times the alphabet, in lower case.
 */
void print_alphabet_X10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
