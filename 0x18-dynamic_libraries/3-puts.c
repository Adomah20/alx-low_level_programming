#include "main.h"

/**
 * _puts - printing a string and a new line
 * @str: satring input
 * Return: void
 */

void _puts(char *str)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
		_putchar('\n');
		break;
		}
		_putchar(str[counter]);
		counter++;
	}
}
