#include <stdio.h>

/**
 * main -Entry point
 * Description: integer values
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		putchar((char)num);
	putchar('\n');
	return (0);
}
