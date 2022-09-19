#include "main.h"

/**
 * _strlen - find the length of a string
 * Return: 0 (sucess)
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
