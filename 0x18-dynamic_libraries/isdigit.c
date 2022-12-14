#include "main.h"

/**
 * _isdigit - that verifies if a character is a digit
 * @c: tested character
 * Return: returns 1 if it is uppercase
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
