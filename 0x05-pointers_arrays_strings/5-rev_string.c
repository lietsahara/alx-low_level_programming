#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverses characters of a string
 * @s: name of array
 * Return: 0
 */

void rev_string(char *s)
{
	int first;
	int last;
	char hold;

	first = 0;
	last = strlen(s) - 1;
	
	while (first < last)
	{
		hold = s[last];
		s[last] = s[first];
		s[first] = hold;

		first++;
		last--;
	}
}
