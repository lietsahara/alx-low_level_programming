#include <stdio.h>
#include "main.h"

/**
 * main - checks code
 * print_numbers - prints from 0 to 9 using ASCII
 * Description : 'uses putchar'
 * Return: 0
 */

void print_numbers(void)
{
	char v;

	v = '48';

	for (v = 48; v <= 57; v++)
	{
		putchar(v);
	}
	return (0);
}

