#include "main.h"

void print_to_98(int n)
{
	int i;
	while (n!=98)
	{
		if (n>98)
		{
			for (i = n;i > 98;i++)
			{	
				printf("%d",i);
			}
		}
		else if (n<98)
		{
			for (i = n;i < 98;--i)
			{
				printf("%d",i);
			}
		}
	}

	printf("98\n");
}
