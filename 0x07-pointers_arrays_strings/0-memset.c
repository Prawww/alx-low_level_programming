#include "main.h"

/**
 * *_memset - inputting info in a buffer
 * @str: pointer to buffer
 * @b: the constant byte to fill the memory
 * @n: nummber of bytes to feel
 * Return; pointer to memory area str
 */
char *_memset(char *str, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; ++i)
		*(str + i) = b;
	return (str);
}
