#include "main.h"
#include <stdio.h>

/**
 * print_array - prints arrays followed by a dash and comma
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;
	i=0;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
}
