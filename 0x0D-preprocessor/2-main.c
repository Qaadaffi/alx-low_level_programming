#include <stdio.h>

/**
 * main - is a program that prints the name of the file the program was
 * compiled from followed by a new line
 * __FILE__ is an inbuilt defined constant that gives the name of the file
 * Return: 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
