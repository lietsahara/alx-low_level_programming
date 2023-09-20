#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other caracter of a string followed by a new line
 * Returns: 0
 * @str: array name
 */

void puts2(char *str)
{
	int i;
	int x;

	i = 0;
	x = str[i];

	while (str[i])
	{
		if (x % 2 == 0)
		{
			putchar(str[i]);
			i++;
		}
	}
		putchar('\n');
}
