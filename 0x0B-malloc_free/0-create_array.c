#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - is a function that creates an array of chars and
 * initializes the array with with a specific char
 * @size: is the size of the array to be created
 * @c: is a character to initialize the array
 * Return: NUll if the size is 0 or it fails, or a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		buffer[a] = c;
	}
	return (buffer);
}
