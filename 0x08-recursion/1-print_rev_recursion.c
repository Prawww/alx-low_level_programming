#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string recursively
 * @s: the string to output
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
