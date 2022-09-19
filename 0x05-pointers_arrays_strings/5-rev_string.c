#include "main.h"

/**
 *rev_string - to reverse a string
 *@s: string
 */
void rev_string(char *s)
{
	char *t = s;
	char n[1000];
	int i = 0;

	while (*s != '\0')
	{
		n[i] = *s
		s++;
		i++;
	}
	i = 0;

	while (s > t)
	{
		s--;
		*s = n[c];
		c++;
	}
}
