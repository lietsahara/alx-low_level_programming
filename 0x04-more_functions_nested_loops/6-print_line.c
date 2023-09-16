#include <stdio.h>
#include "main.h"

/**
 * print_line - prints line
 * @n: input value
 * returns - _ printed n times
 */

void print_line(int n)
{
	char y = '_';
	int i;

	while (i < n)
	{
		putchar(y);
		i++;
	}
	putchar('\n');
}
