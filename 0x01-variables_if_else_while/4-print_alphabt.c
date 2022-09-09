#include <stdio.h>

/**
 * main - Entry point
 * Description: print that except q and e
 *
 * return 0 (success)
 */
int main(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q' )
			continue;
		putchar(c);
	}
	putchar('\n');
	return  (0);
}
