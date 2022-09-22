#include "main.h"

/**
 * string_toupper - change all lowercase letters in a string to uppercase
 * @s: the string to processed
 * Return: the resultant string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
