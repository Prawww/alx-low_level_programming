#include "main.h"

/**
 * _pow_recursion - compute power of a base to its exponent
 * @x: the base
 * @y: the exponent
 * Return: 0 (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
