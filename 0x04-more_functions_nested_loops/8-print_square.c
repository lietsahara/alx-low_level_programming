#include "main.h"

/**
 * print_square - prints square
 * @a: input
 * Description: uses putchar
 * Return: 0
 */

int print_square(int a)
{
	int i;
	int j;

	i = 0;
	j = 0;

	if (a <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < a; j++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
	return (0);
}
