#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - is a function that prints a name
 * @name: name to be printed
 * @f: pointer to the func
 * Return: 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	else
	{
		f(name);
	}
}
