#include "main.h"

/**
 * factorial - compute the factorial of a number
 * @num/: the number to compute
 * Return: length of the string
 */
int factorial(int num)
{
	if (num < 0)
		return (-1);
	else if (num == 0 || num == 1)
		return (1);
	else
		return (num * factorial(num - 1));
}
