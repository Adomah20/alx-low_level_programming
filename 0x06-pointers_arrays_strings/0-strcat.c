#include "main.h"

/**
 * _strcat - concatenation of two strings
 * @dest: character to parse
 * @src: character to parse
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
