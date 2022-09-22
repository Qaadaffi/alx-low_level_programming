#include "main.h"

/**
 * _strncpy - is a function that copies a string
 * @src: string to be copied
 * @dest: string that is copied into
 * @n: number of bytes of src to be copied
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
