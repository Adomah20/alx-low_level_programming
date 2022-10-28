#include "main.h"
/**
 * string_toupper - changing lowercase characters to uppercase
 * @s: the string to be change
 * Return: character
 */

char *string_toupper(char *s)
{
	int x;

	x = 0;

	while (*(s + x))
	{
		if (*(s + x) >= 'a' && *(s + x) <= 'z')
			*(s + x) -= 'a' - 'A';
		x++;
	}
	return (s);
}
