#include "main.h"

/**
 * _strpbrk - searches a string
 * @s:- string
 * @accept: - bytes being searched
 * Return: character pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				return (&(s[a]));
		}
	}
	return (0);
}
