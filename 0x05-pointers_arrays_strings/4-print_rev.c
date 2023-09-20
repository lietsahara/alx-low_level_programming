#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints in reverse
 * @s: array
 * Return: 0
 */

void print_rev(char *s)
{
	int first;

	first = 0;

	while (s[first])
	{
		first++;
	}
	while (first--)
	{
		putchar(s[first]);
	}
	putchar('\n');
}

