#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print a times table for a given number n
* @n: the starting number
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		if (n > 98)
			--n;
		else if (n < 98)
			++n;
		printf(", ");
	}
	printf("%d", 98);
	printf("\n");
}
