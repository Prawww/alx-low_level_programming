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

	while (h > l) {
		if (s[l++] != s[h--]) {
			printf("%s is not a palindrome\n", s);
		}
	}
	printf("%s is a palindrome\n", s);
	return (0);
}
