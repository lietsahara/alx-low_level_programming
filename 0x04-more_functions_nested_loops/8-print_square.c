#include "main.h"
#include <stdio.h>

/**
 * print_square - prints square
 * @size: input
 * Description: uses putchar
 * Return: 0
 */

void print_square(int size)
{
	int i;
	int j;

	i = 0;
	j = 0;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
