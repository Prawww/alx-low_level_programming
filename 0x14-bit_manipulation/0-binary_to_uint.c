#include "main.h"

/**
 * binary_to_uint - converts a binary to a decimal
 * Description: converts binary to decimal
 * @b: the variable
 * Return: the integer value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int str_len = 0;
	int base = 0;

	if (!check_valid_string(b))
		return (0);

	while (b[str_len] != '\0')
		str_len++;

	while (str_len)
	{
		decimal |= ((b[str_len - 1] - '0') << base);
		base++;
		str_len--;
	}
	return (decimal);
}
/**
* check_valid_string - checks if a string is a series of 1s and 0s
* @b: variable
* Return: 1
*/
int check_valid_string(const char *b)
{
	if (b == NULL)
		return (0);
	while (*b)
	{
	if (*b != '1' && *b != '0')
		return (0);
	b++;
	}
return (1);
}
