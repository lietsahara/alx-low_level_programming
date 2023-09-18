#include <stdio.h>
#include "main.h"

/**
 * puts_half - divides array in half and prints
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	i = 0;
	for (i = 0; i< strlen(str); i++)
	{
		printf("%c", str[i]);
		if (i== (strlen(str) -1 )/2)
		{
			printf("\n");
		}
	}
}
