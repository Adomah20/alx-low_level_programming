#include "main.h"

/**
 * rev_string - string reversal
 * _putchar - printing each character
 * @s: character to parse
 * Return: 0 always
 */

void rev_string(char *s)
{
	int x, y, z;
	char a;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	z = x - 1;
	for (y = 0; z >= 0 && y < z; z--, y++)
	{
		a = s[y];
		s[y] = s[z];
		s[z] = a;
	}
}
