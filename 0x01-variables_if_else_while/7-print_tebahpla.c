#include <stdio.h>

/**
 * main -Entry point
 * Description: integer values
 * Return: 0 (sucess)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
