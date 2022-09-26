#include "main.h"
#include <stdio.h>
/**
 * *_strstr is function finds the first occurrence of a substring in a string
 * @haystack: the string to be searched for a substring
 * @needle: substring whose first occurence is searched for
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[a]);
	}
	return (NULL);
}
