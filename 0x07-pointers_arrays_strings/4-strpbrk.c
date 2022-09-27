#include "main.h"

/**
 * *_strpbrk - searches a string
 * @s: -string
 * @acceot: - bytes being searched
 * return: character
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
