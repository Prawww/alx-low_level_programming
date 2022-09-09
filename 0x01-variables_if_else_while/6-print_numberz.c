#include <stdio.h>

/**
 * main -entry point
 * Description: integer values
 *
 * return: 0 (sucess)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		putchar((char)num);
	putchar('\n');
	return (0);
}
