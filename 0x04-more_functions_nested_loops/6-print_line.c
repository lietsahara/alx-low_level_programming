#include <stdio.h>
#include "main.h"

/**
 * main - checks code
 *
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
