#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);

/**
 * str_concat - is a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a newly allocated space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * If null is passed, treat it as an empty string
 * If there is a failure, NULL is returned
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1;
	int len_s2;
	int a;
	int b = 0;
	char *s3;

	len_s1 = (s1 == NULL) ? 0 : _strlen(s1);
	len_s2 = (s2 == NULL) ? 0 : _strlen(s2);

	s3 = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (s3 == NULL)
		return (NULL);

	for (a = 0; a < len_s1; a++, b++)
		s3[b] = s1[a];

	for (a = 0; a < len_s2; a++, b++)
		s3[b] = s2[a];

	s3[b] = '\0';

	return (s3);
}

/**
 * _strlen - is a function that finds the length of a string
 * @s: address of first character in the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}
