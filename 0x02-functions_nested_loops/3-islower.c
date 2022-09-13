#include "main.h"

/**
 * _islower checks lowercase character
 *  @c: the character to check
 *  Description: _islower checks lowercase character
 *  Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}