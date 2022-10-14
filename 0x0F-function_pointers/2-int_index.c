#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: Array containing elements
 *@size: number of elements in array
 *@cmp: function which compare values
 *Return: returns -1 if no element match
 * or when size is less than zero
 *return pointer to the first corresponding element
 *
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array != 0 && cmp != 0 && size > 0)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
				return (index);
		}
	}
	return (-1);
}
