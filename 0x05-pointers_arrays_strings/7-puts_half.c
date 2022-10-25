#include "main.h"
/**
 * puts_half - printing half of a string
 * @str: character to be parsed
 * Return: o always
 */

void puts_half(char *str)
{
	int s, t;

	s = 0;

	while (str[s] != '\0')
		s++;
	if (s + 1 % 2 != '0')
		t = (s - 1) / 2;
	else
		t = (s / 2);
	t++;

	for (s = t; str[s] != '\0'; s++)
	_putchar(str[s]);
	_putchar('\n');
}
