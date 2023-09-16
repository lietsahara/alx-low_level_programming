#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase letters
 *
 * @c: input
 * Description: returns 1 if uppercase and zero if not
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
	return (0);
}
