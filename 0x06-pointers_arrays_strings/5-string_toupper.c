#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string
 * to uppercase letters
 * @s: string to be modified
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] = s[j] - 32;
	}

	return (s);
}
