#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * argstostr - concatenate arguments
 * @ac: argument
 * @av: argument
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i;
	int a = 0;
	int k = 0;
	unsigned int j;
	char *p;

	if (ac == 0 || av == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		a += strlen(av[i]);
	}
	p = malloc(a + 1 + ac);
	if (p == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (strlen(av[i])); j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
