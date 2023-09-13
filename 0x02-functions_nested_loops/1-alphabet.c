#include "main.h"

/**
 * main -check code
 *
 * return - alphabet
 */

void print_alphabet(void)
{
	char letter;
	letter = 'a';
	while (letter <= 'z')
	{
		printf("%c",letter);
		letter++;
	}
	printf("\n");
}
