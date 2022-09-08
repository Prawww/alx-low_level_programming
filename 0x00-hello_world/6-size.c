#include<stdio.h>

/**
 * main-entry point
 *
 * Return:0 (success)
 */
int main(void)
{
	printf("Size of a char:%lu",sizeof(char));
	printf("Size of an int:%lu",sizeof(int));
	printf("Size of a long int:%lu",sizeof(long int));
	printf("Size of a long long int:%lu",sizeof(long long int));
	printf("Size of a float:%lu",sizeof(float));
	return (0);
}
