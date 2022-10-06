#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - is a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes of s2 to be concatenated into s1
 * Return: Null if the function fails, or a pointer to the allocated space
 * in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length = n, index;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (index = 0; s1[index]; index++)
	{
		length++;
	}

	concat = malloc(sizeof(char) * (length + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	length = 0;

	for (index = 0; s1[index]; index++)
	{
		concat[length++] = s1[index];
	}

	for (index = 0; s2[index] && index < n; index++)
	{
		concat[length++] = s2[index];
	}

	concat[length] = '\0';

	return (concat);
}
