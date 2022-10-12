#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - is a function that adds a and b
 * @a: first int
 * @b: second int
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - is a function that subtracts b from a
 * @a: int that is subtracted from
 * @b: int subtracted from a
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - is a function that multiplies a and b
 * @a: first int
 * @b: second int
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - ia a function divides a with b
 * @a: first int
 * @b: second int
 * Return: 0
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - is a function that calculates the remainder of the division of
 * a by b
 * @a: first int
 * @b: second int
 * Return: 0
 */
int op_mod(int a, int b)
{
	return (a % b);
}
