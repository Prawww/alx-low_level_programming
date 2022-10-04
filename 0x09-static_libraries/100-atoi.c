#include "main.h"

int _atoi(char *s)
{
	int c = 1;
	int res = 0;

	while (s[0] != '\0')
	{
		if (s[0] == '-')
			c *= -1;
		else if (s[0] >= '0' && s[0] <= '9')
			res = (res * 10) + (s[0] - '0') * c;
		else if (res)
			break;
		s++;
	}
	return (res);
}
