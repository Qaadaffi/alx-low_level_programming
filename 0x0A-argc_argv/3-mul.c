#include <stdio.h>
#include "main.h"

/**
 * _atoi - is a function that converts a string to an integer
 * @s: string that is converted
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
 * main - is a function that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, number1, number2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = _atoi(argv[1]);
	number2 = _atoi(argv[2]);
	result = number1 * number2;

	printf("%d\n", result);

	return (0);
}
