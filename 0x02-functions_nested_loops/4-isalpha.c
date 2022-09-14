#include "main.h"

/**
 * _isalpha - check if a character is alphabet
 * @c: letter being tested
 * Return: 1 (Success)
 */
int _isalpha(int c)
{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
