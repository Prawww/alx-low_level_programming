#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - test the greedy algorithm
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int num, count;
	count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	while (num > 0)
	{
		while (num >= 25)
		{
			num -= 25;
			count++;
		}
		while (num >= 10)
		{
			num -= 10;
			count++;
		}
		while (num >= 5)
		{
			num -= 5;
			count++;
		}
		while (num >= 2)
		{
			num -= 2;
			count++;
		}
		while (num >= 1)
		{
			num -= 1;
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
