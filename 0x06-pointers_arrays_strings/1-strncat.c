#include "main.h"

/**
 * _strncat - concatenation two string
 * @src: The first string to be concatenated to
 * @dest: The second string to be concatenated
 *@n: The number of charactersa to be concatenated
 * Return: The result of the string that's concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		continue;
	}
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
