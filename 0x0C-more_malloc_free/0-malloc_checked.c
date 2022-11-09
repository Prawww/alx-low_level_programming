#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - check if malloc works
 * @b: the integer argument
 * Return: void pointer
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
