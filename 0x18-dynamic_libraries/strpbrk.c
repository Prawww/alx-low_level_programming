#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s:string where search is made
 * @accept: string where searched bytes are located
 * Return: returns the pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
