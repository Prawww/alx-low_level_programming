#include <stdio.h>

/**
 * main -Entry point
 * Description: hexadecimal numbers
 * Return: 0 (success)
 */
int main(void)
{	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
