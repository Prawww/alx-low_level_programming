#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - checks if palindrome
 * @s: the string
 * Description: palindrome diagnosis
 * Return: 0 (success)
 */

int is_palindrome(char *s)
{
	int l = 0;
	int h = strlen(s) - 1;

	if (s || l < 0 || h < 0 == NULL)
		return (0);
	if (s[l++] != s[h--])
		return (1);
	if (s[l++] == s[h--])
		return (is_palindrome(s));
	return (0);
}
/**
 * _strlen - finds the string length
 * @s: - variable used
 * Description: find string length
 * Return: integer value
 */
int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}
	return (len);
}
