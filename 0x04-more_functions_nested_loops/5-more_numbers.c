#include <stdio.h>
#include "main.h"

/**
 * more_numbers -prints to 14 10x
 * Return: to 14 10 times
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 10)
			{
				putchar('j');
			}
			else if (j > 10 && j <= 14)
			{
				putchar('1');
				putchar(j % 10 + '0');
			}
		}
		putchar('\n');
	}
}
