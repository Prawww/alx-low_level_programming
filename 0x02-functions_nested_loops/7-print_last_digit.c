#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: number being tested
* Return: 0 (success)
*/
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
