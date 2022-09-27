#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_chessboard - print chessboard
 * @a: 
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			printf("%c",a[b][c]);
		}
		printf("\n");
	}
}
