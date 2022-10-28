#include "main.h"

int check_valid_string(const char *b);

/**
 * binary_to_uint - is a function that converts a binary number to an unsigned
 * int
 * @b: the representation of the binary number as a string
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int str_len = 0, base = 1;

	if (check_valid_string(b))
		return (0);

	while (b[str_len] != '\0')
		str_len++;

	while (str_len)
	{
		decimal += ((b[str_len - 1] - '0') * base);
		base *= 2;
		str_len--;
	}
	return (decimal);
}

/**
 * check_valid_string - is a function that checks if a string has only 0's
 * and 1's
 * @b: is the string to be checked
 * Return: 1 if string is valid, 0 otherwise
 */
int check_valid_string(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}
