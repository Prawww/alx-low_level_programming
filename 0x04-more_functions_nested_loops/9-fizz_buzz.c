#include <stdio.h>

/**
 * main - entry Point
 *fizz buzz - to fizz buzz in intervals
Return: 0 (success)
*/
int main(void)
{
	int i;

	for (i =0; i <= 100; i++)
	{
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
			printf("%d",i);
		return (0);
	}
}
