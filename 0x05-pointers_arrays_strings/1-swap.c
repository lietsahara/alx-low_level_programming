#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps two values using pointers
 * @a: pointer 1
 * @b: pointer 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = *a;

	return (0);
}
