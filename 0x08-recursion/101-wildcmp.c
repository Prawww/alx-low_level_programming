#include "main.h"

/**
 * wildcmp - compares two string
 * @s1: - string to be checked
 * @s2: - pattern to be used
 * Return: integer value
 */
int wildcmp(char 8s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	return (0);
}