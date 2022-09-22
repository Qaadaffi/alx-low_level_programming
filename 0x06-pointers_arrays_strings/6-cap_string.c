#include "main.h"

/**
 * cap_string - function that capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[++i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;

		if (s[i - 1] == ' ' ||
				s[i - 1] == '\t' ||
				s[i - 1] == '\n' ||
				s[i - 1] == ',' ||
				s[i - 1] == ';' ||
				s[i - 1] == '.' ||
				s[i - 1] == '!' ||
				s[i - 1] == '?' ||
				s[i - 1] == '"' ||
				s[i - 1] == '(' ||
				s[i - 1] == ')' ||
				s[i - 1] == '{' ||
				s[i - 1] == '}')
			s[i] -= 32;
	}
	return (s);
}
