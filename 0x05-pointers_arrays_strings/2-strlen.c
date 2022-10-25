#include "main.h"

/**
 * _strlen - finding the length of a string
 * @s: String pointer to string which we're to find the length
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int p = 0;
	/* increment up to when the last character is null, \0*/
	while (*(s + p) != 0)
	{
	p++;
	}
	return (p);
}
