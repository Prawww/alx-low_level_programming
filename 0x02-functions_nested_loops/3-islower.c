#include "main.h"

/**
 * _islower - check if a character is lower
 * @c: letter being tested
 * Return: 1 (Success)
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
