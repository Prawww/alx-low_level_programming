#include "main.h"

/**
 * print_line - draw a straight line
 * @n - the times the  _ will be drawn
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; ++i)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}