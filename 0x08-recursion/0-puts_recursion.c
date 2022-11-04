#include "main.h"
/**
 * _puts_recursion - printing of string with new line
 * @s: holds a string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
