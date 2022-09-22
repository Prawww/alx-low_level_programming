#include "main.h"

/**
 * *_strncpy -copy a string
 * @dest: initial string
 * @src: copied string
 * @n: int variable 
 * Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
