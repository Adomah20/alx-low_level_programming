#include "main.h"

/**
 * leet - function that encode a string into 1337
 * @s: string to be encoded
 *Return: the string
 */

char *leet(char *s)
{
	int x, y;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (a[y] == s[x])
				s[x] = b[y];
		}
	}
	return (s);
}
