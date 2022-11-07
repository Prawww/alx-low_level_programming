#include "main.h"
/**
 * check_prime - check whether a number is primt
 * @num: the number to check
 * @i: the number to divide @num
 * Return: 0 (success)
 */
int check_prime(int num, int i)
{
	if (i * i > num)
		return (1);
	else if (num % i == 0)
		return (0);
	return (check_prime(num, i + 1));
}
/**
 * is_prime_number - check whether prime
 * @num: the number to check
 * Return: 0 (success)
 */
int is_prime_number(int num)
{
	if (num <= 1)
		return (0);
	return (check_prime(num, 2));
}
