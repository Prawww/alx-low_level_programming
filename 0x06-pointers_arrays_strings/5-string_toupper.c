#include "main.h"

/**
 * *string_to upper - to upper
 * Return: 0 (success)
 */
char *string_toupper(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
