#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: where you need to search
 * @needle: the substring being searched for
 * Return: character string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != 0)
	{
		char *a = haystack;
		char *b = needle;

		while (*haystack == *b && *b != 0 && *haystack != 0)
			haystack++, b++;
		if (*b == 0)
			return (a);
		haystack = ++a;
	}
	return (0);
}
