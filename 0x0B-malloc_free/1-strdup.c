#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str: the source of the string
 * Return: returns a pointer to the copied string
 */
char *_strdup(char *str)
{
	char *copy;
	int x, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	copy = (char *)malloc(sizeof(char) * length) + 1;
	if (copy == NULL)
		return (NULL);

	for (x = 0; x < length; x++)
		copy[x] = str[x];
	copy[length] = '\0';
	return (copy);
}
