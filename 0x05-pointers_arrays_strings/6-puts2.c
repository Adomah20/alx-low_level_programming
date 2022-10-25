#include "main.h"

/**
 * puts2 - prints every single character of a string
 * @str: character to be parsed
 * Return: 0 always
 */

void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	if (s % 2 == 0)
		_putchar(str[s]);
	_putchar('\n');
}
