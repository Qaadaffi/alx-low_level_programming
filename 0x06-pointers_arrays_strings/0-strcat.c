#include "main.h"
#include <stdio.h>

/**
 * _strcat - this function concatenates two strings, and returns a pointer
 * to the resulting destination string.
 * @src: string that is appended
 * @dest: string to append @src
 * Return: pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
