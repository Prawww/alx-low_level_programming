#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: - string pointer
 * @c: - character to search for
 * Return: pointer to string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (;; ++i)
	{
		if (*(s + i) == c)
			return (s + i);
		if (*(s + i) == '\0')
			return (NULL);
	}
}
