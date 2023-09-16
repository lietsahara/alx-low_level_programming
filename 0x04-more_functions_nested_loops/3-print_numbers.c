#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints from 0 to 9 using ASCII
 * Description : 'uses putchar'
 * Return: 0
 */

void print_numbers(void)
{
	char v;

	v = '0';

	for (v = '0'; v <= '9'; v++)
	{
		putchar(v);
	}
	putchar('\n');
}
