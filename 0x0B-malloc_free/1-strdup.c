#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);

/**
 * _strdup - is a function that a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter (str)
 * @str: is the string which is duplicated
 * Return: a pointer to a new string which is a duplicate of the string str
 * otherwise return NULL if str = NULL or the memory is insufficient
 */

char *_strdup(char *str)
{
	char *d_str;
	int len_str;
	int a;

	if (str == NULL)
	{
		return (NULL);
	}

	len_str = _strlen(str);
	d_str = malloc(sizeof(char) * (len_str + 1));

	if (d_str == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < len_str; a++)
	{
		d_str[a] = str[a];
		d_str[len_str] = '\0';
	}
	return (d_str);
}

/**
 * _strlen - is a function that finds the length of a string
 * @s: is the address of the string's first character
 * @l = length of the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s)
	{
		l++;
		s++;
	}

	return (l);
}
