#include "main.h"
/**
 * _strchr - function that locate character in a string
 * @c: characters in  the string
 * @s: the string parsed
 * Return: A pointer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
