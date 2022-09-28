#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - is a function that primts a string in reverse
 * @s: the string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
