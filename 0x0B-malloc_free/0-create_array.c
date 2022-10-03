#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size
 * @c: the character
 * Return: 0 (success)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
