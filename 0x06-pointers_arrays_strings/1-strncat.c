#include "main.h"

/**
 * *_strncat - append but limit the number of bytes
 * @dest: - the initial string
 * @src: - the string to be added
 * Return: character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && src[j] < src[n])
	{
		dest[i] = src[j];
		i++;
		j++;

		if (j < n)
			dest[i] = '\0';
	}
	return dest;
}
