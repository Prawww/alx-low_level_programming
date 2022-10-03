#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers
 * @argv: array of elements
 * @argc: numbet of arguments
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int sum, i, j;
	i = 1;
	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argc > 1)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
		argc--;
	}
	printf("%i\n", sum);
	return(0);
}
