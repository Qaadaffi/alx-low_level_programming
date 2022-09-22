#include <stdio.h>
#include "main.h"

/**
 * this function appends a source string to the destination string,
 * and returns pointer to the resulting destination string. 
 * @src: sting to be appended
 * @dest: destination string
 * @n: number of bytes of src string to be appended
 *
 * Return: pointer to the resulting dest string.
 */
char *_strncat(char *dest, char *src, int n);
{
	int b, d;

	b = 0;
	d = 0;

	while (dest[b] != '\0')
		b++;

	while (src[d] != '\0' && d < n)
	{
		dest[b] = src[d];
		b++;
		d++;
	}

	dest[b] = '\0';

	return (dest);
}
