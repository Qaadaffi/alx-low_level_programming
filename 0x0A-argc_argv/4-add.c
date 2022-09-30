#include <stdio.h>
#include "main.h"

/**
 * _atoi - is a function that converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, c, fun, d, digit;

	a = 0;
	b = 0;
	c = 0;
	fun = 0;
	d = 0;
	digit = 0;

	while (s[fun] != '\0')
		fun++;

	while (a < fun && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}

/**
 * main - is a function that adds two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, number, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		number = _atoi(argv[k]);
		if (number >= 0)
		{
			sum = sum + number;
		}
	}

	printf("%d\n", sum);
	return (0);
}
