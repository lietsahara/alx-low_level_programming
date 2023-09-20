#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string 1 to destination 2
 * @dest: destination
 * @src: source
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	x = -1;

	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');
	return (dest);
}
