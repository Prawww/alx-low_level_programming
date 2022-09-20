#include "main.h"
#include <stdio.h>

/**
 * print_array - print n values of an array
 * @a:
 * @n
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (n-- > 0)
	{
		printf("%d", a[i++]);
		if (n != 0)
			printf(", ");
	}
	printf("\n");
}
