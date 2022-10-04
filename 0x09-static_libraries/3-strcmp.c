#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int d = 0;
	int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			d = ((s1[i] - '\0') - (s2[i] - '\0'));
			break;
		}
		i++;
	}
	return (d);
}
