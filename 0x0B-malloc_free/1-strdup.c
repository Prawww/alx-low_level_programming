#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer
 * @str: a string
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ptr = malloc(sizeof(char) * i + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
		ptr[i] = str[i];
		return (ptr);
}
