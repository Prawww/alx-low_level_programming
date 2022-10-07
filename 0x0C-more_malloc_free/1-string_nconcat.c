#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concattenate to strings
 * @s1: the first string array
 * @s2: the second string array
 * @n: the integer argument
 * Return: character string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int m;
	unsigned int p;
	unsigned int k = 0;
	unsigned int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;
	len = i + j ;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (p = 0; p < i; p++)
		ptr[k++] = s1[p];
	for (m = 0; m < j; m++)
		ptr[k++] = s2[m];
	ptr[k] = '\0';
	return (ptr);
}
