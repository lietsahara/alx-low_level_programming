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
		return (1);
	else
		return (0);
	return (0);
}
