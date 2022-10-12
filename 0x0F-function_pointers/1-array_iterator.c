#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - is a funtion that executes a function given as a parameter
 * on each element of an array
 * @array: is an array
 * @size: is the number of array elements printed
 * @action: is a pointer to print regular or hexadecimal
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
