#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: first string
 * @accept: matches one of the bytes
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (NULL);
}
