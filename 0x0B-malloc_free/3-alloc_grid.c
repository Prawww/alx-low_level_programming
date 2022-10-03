#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <sdlib.h>

/**
 * alloc_grid - returns pointer
 * @width: rows
 * @height:
 * Return: 0 (success)
 */
int **alloc_grid(int width, int height)
{
	B
	int **pointer;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	if (width > INT_MAX || height > INT_MAX)
		return (NULL);
	pointer = malloc(height * sizeof(int *));
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pointer[i] = malloc(width * sizeof(int));
		if (pointer[i] == NULL)
		{
			for (; i >= 0; i--)
				free(pointer[i]);
			free(pointer);
			return (NULL);
		}
	}
	fpr (int i = 0; i < height; l++)
		for j = 0; j < width; j++)
			pointer[i][j] = 0;
	return (pointer);
}
