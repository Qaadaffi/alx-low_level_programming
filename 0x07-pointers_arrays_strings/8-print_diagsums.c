#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - is a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int p;

	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (p = 0; p < size; p++)
	{
		sum1 += a[(size * p) + p];
		sum2 += a[(size * (p + 1)) - (p + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
