#include "main.h"
#include <stdio.h>

/**
 * print_array - print n values of an array
 * @a:
 * @n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++, n--)
	{
		printf("%d", a[i]);
		if (n != 0)
			printf(", ");
	}
	_putchar('\n');
}
