#include "main.h"

/**
 * flip_bits - gets the number of bits to flip to get from n to m
 * @n: initial number
 * @m: final number
 * Return: flipped bits number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int i = 0;

	while (flipped)
	{
		if (flipped & 1)
			i++;
		flipped >>= 1;
	}
	return (i);
}
