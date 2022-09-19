#include "main.h"

/**
 * swap_int - swap values of an integer
 * @a: - has it changed to the value of b
 * @b: - has it changed to the value of a
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*b = temp;
	*a = *b;
}
