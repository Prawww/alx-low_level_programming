#include "main.h"

/**
 * _strlen - find the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++, s++)
	{
		return (i);
	}
}
