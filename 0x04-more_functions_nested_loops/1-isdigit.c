#include "main.h"

/**
 *_isdigit - check if digit
 *@c: if is digit
 *Return: 0 (success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{ 
		return (1);
	}
	else
	{
		return (0);
	}
}
