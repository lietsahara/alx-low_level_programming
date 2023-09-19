#include <stdio.h>
#include "main.h"
#include "_putchar.c"

/**
 * puts2 - prints every other caracter of a string followed by a new line
 * Returns: 0
 * @str: array name
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
