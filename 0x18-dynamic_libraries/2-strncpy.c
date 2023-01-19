#include "main.h"

/**
 *_strncpy - function that copy string
 *@src: The string to be copied
 *@dest: the string to be copied to
 * @n: the number of string to a copied
 * Return: the string copied to
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && *(src + x); x++)
	{
		*(dest + x) = *(src + x);
	}
	for (; x < n; x++)
	{
		*(dest + x) = '\0';
	}
	return (dest);
}
