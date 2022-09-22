#include "main.h"

/**
*  reverse_array - is a function that reverses the content of an array
*  @a: array
*  @n: number of elements
*/

void reverse_array(int *a, int n)
{
int h, i;
	for (i = n - 1; i > n / 2; i--)
	{
	h = a[n - 1 - i];
	a[n - 1 - i] = a[i];
	a[i] = h;
	}
}
