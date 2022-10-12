#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - is a function that returns the index of the first element
 * for which the cmp function does not return 0
 * @array: is an array
 * @size: the number of elements in the array
 * @cmp: is a pointer to the function used to compare values in the 3 functions
 * in main
 * Return: -1 if no element matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	return (-1);
}
