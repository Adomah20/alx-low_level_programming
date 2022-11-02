#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: numbers to copy
 * @src: memory area bytes
 * @dest: memory area
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
