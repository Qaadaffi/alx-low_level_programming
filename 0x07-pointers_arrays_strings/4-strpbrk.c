#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - is a function that locates the first occurrence in a string
 * of any of the bytes in another string.
 * @s: string that is searched
 * @accept: string that contains the bytes that are searched for
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *  or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)

	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
			return (s);
			}
		}
		s++;
	}
	return (NULL);
}
