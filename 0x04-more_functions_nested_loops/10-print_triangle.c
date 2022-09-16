#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: Determines how big the triangle
*/
void print_triangle(int size)
{
	int i, j;

	if (size < 1)
		_putchar('\n');
	else
	{
		for (int i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if ((j <i = size - 1))
				{
					_putchar(32);
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
