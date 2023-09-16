#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks fordigits from zero to 9 using ASCII
 *
 * @c: input
 * Description: returns 1 if digit and zero if not
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		putchar(49);
	else
		putchar(48);
	return (0);
}
