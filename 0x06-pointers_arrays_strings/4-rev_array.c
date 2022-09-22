#include "main.h"
/**
 * reverse_array - is a function that reverses the content of an array
 * of integers.
 * @n: number of elements of the array
 * @a: array to be reversed
 */
void reverse_array(int *a, int n)
{
	int c, d, tmp;

	c = n - 1;

	for (c = 0; c < n / 2; c++)
	{
		tmp = a[c];
		a[c] = a[d];
		a[d--] = tmp;
	}
}
