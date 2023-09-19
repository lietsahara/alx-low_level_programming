#include <stdio.h>
#include "main.h"
#include "_putchar.c"

/**
 * _puts - prints characters and ads a newline;
 * @str: input
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	i = 0;

	for (i = 0;  str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
