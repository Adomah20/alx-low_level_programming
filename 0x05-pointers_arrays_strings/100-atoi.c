#include "main.h"

/**
 * _atoi - converting of string to integer
 * @s: pointer to convet
 * Return: integer
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int c = 0;
	int f = 1;
	int n = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			f *= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			n = 1;
			c = (c * 10) + (s[a] - '0');
			a++;
		}

		if (n == 1)
		{
			break;
		}
		a++;
	}

	c *= f;
	return (c);
}
