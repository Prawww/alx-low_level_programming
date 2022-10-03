#include <stdio.h>

/**
 * main - prints all the arguments
 * @argc: number of arguments
 * argv: array of arguments
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i++ < argc)
		printf("%s\n", argv++);
	return(0);
}
