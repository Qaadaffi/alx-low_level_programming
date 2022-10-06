#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - is a function that allocates memory using malloc
 * @b: is the number of bytes to be allocated
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
