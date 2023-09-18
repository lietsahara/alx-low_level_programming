#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - divides array in half and prints
 * @str: array
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	int x;

	i = 0;
	x = strlen(str);

	for (i = 0; i < x; i++)
	{
		if (i >= (x - 1) / 2)
		{
			printf("%c", str[i]);
		}
		printf("\n");
	}
}
