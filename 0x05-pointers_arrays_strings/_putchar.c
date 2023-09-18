#include <unistd.h> 

/**
 * _putchar - prints the character inputed
 * @c: input
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
