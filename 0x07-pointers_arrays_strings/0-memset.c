#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @n: memory area pointed to
 * @s: constant byte
 * @b: Memory pointer
 * Return: Pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
