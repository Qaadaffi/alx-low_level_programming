#include "main.h"

/**
 * cap_string - function that capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *p)
{
	int i, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; p[i] != '\0'; i++)
	{
		if (i == 0 && p[i] >= 'a' && p[i] <= 'z')
			p[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (p[i] == spe[j])
			{
				if (p[i + 1] >= 'a' && p[i + 1] <= 'z')
				{
					p[i + 1] -= 32;
				}
			}
		}
	}

	return (p);
}
