#include "main.h"
#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: number of atguments
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
