#include "main.h"

/**
 * main - check code
 *
 * return - 1 , 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return 1;
	}
	else if (n < 0)
	{
		printf("-");
		return -1;
	}
	else if (n == 0)
	{
		printf ("0");
		return 0;
	}
}
