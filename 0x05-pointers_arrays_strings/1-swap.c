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
	int x;

	x = *a;

	*a = *b;
	*b = x;
}
