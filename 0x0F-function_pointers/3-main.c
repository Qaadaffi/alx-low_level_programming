#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - is a function that prints the result of simple operations.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
* Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int one, two, answer;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	one = atoi(argv[1]);
	two = atoi(argv[3]);
	get_op = argv[2];

	/* adding edge case if argv[2] is longer than 1 char*/
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	answer = res(one, two);

	printf("%d\n", answer);
	return (0);
}
