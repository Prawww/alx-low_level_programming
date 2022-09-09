#include<stdio.h>

/**
 * main- entry point
 * Description:print in alphabet in lowercase 
 * and then in uppercase
 * Return: 0 (success)
 */
int main()
{	char c;
	
	for(c='a';c<='z';c++)
		putchar(c);
	for(c='A';c<='Z';c++)
		putchar(c);
	putchar('\n');
	return (0);
}
