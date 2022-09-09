#include <stdio.h>

/**
 * main -entry point
 * Description: integer values
 *
 * return 0 (sucess)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
