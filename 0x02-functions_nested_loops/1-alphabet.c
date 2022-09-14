#include "main.h"

/**main - Entry point
 * Description: print all the characters
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
