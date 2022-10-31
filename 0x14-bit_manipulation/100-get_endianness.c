#include "main.h"

/**
 * get_endianness - checks whether a machine is a big endian or little
 * Return: 1 if little
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
		return (1);
	return (0);
}
