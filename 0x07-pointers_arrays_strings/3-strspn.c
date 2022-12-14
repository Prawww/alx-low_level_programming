#include "main.h"

/**
 * _strspn - get length of prefix substring
 * @s: string pointer
 * @accept: array of acceptable bytes
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int pre;

	for (i = 0 ; *(s + i) != '\0'; ++i)
	{
		pre = 0;
		for (j = 0; *(accept + j) != '\0'; ++j)
		{
			if (*(s + i) == *(accept + j))
			{
				pre = 1;
				break;
			}
		}
		if (!pre)
			return (i);
	}
	return (0);
}
