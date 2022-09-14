#include "main.h"

/**
 * times_table - print the times table upto 9
 * Return: 0 (Success)
 */
void times_table(void)
{
	int n, i, j, product;

	if (n >= 0 && n <= 9)
	{
		for (i = 0; i <= n; ++i)
		{
			for (j = 0; j <= n; ++j)
			{
				product = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
			_putchar('\n');
			}
		}
	}
}
