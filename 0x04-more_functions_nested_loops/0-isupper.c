#include "main.h"

/**
 * _isupper - to check if character is capital
 * @c - check character c
 * Return: 0 success
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
