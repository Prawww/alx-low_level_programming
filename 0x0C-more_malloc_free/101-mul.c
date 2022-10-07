#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long nul;
	int i, j;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}

		}
	}
	nul = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", nul);
	return (0);
}
		
