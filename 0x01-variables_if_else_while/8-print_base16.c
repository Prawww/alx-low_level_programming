#include <stdio.h>

/**
 * main -entry point
 * Description: hexadecimal numbers
 * return 0 (success)
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
