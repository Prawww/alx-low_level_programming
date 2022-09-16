#include <stdio.h>

/**
 *main - entry Point
 *Description: print Fizz for multiples of 3 and buzz for multiples of 5
 *Return: 0 (success)
*/
int main(void)
{
	int i;

	for (i =0 ; i <= 100; i++)
	{
		printf(" ");
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d",i);
		}
	}
		printf("\n");
		return (0);
}
