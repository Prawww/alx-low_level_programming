#include "main.h"

/**
 * more_numbers - to print numbers 0 to 14
 * Return: 0 (success)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14 ;j++ )
		_putchar(i);
		_putchar('\n');
	}
}