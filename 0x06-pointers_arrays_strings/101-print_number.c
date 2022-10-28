#include "main.h"
/**
 * print_number - function that print integer
 * @n: Numbers to parse
 * Return: void
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('_');
		n *= -1;
	}

	i = n;

	if (i / 10)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
