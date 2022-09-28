#include <stdio.h>
#include <string.h>

/**
 * is_palindrome(char *s)
 * @s: the string
 * Return: 0 (success)
 */
int is_palindrome(char *s)
{
	int l = 0;
	int h = strlen(s) - 1;

	if(NULL == s || l < 0 || h < 0)
		return (0);
	if(l >= h)
		return (1);
	if(s[l] == s[h])
		return isPalindrome(s, l + 1, h - 1);
	return 0;
}
