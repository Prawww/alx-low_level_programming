#include "main.h"

/**
 * is_upper -verifies if a character is uppercase
 * @c: tested character
 * Return: returns 1 if its uppercase
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
