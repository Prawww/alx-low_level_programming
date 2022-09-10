#include <stdio.h>

/**
 * main - Entry point
 * Description: print that except q and e 
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; ch <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
