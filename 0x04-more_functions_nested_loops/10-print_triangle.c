#include "main.h"

/**
 * print_triangle - printing of triangle
 * @size: size of the triangle
 * Retrun: void
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (c = size - a; a >= 1; c--)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			-putchar('\n');
		}
	}
}
