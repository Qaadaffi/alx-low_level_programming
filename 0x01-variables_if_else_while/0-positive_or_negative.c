#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n, gp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	gp = (n % 10);
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, gp);
	if (n == 0)
		printf("Ladt digit of %d is %d and is 0\n", n, n);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n);
	return (0);
}
