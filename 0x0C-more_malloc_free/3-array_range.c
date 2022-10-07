#include "main.h"

/**
* array_range - create an array of integers
* @min: the minimum number
* @max: the maximum number
* Return: 0 (success)
*/
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); ++i)
		array[i] = min + i;

	return (array);
}
