#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints from 1 to 9
 *
 * Return: numbers from 1 to 9 apart from 2 and 4
 */

void print_most_numbers(void)
{
	int x = '1';

	for (x = '1'; x <= '9'; x++)
	{
		if (x == '2' || x == '4')
		{
			continue;
		}
		else
		{
		putchar(x);
		}
	}
}
