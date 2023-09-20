#include <stdio.h>
#include "main.h"

/**
 * _strlen  - prints the length of the array
 * @s: array
 * Return: 0
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l])
	{
		l++;
	}
	return (l);
}
