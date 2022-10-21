#include <stdio.h>

/**
 * bef_main - prints a statement before running main action
 */

void __attribute__((constructor)) bef_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
