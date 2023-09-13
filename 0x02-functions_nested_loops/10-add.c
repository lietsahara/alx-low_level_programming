#include "main.h"
#include <stdio.h>

int add(int a,int b)
{
	int x;
	x = a + b;
	printf("%d/n",x);
	return 0;
}

int main(void)
{
	add(89,9);
	return 0;
}
