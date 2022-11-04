#include "main.h"
/**
 * _pow_recursion - function that returns the value of x raise to pow y
 * @x: number
 * @y: number
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
