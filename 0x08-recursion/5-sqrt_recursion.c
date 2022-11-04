#include "main.h"
/**
 * check - checking for square root
 * @a: number
 * @b: number
 * Return: integer
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - function that returns the nature square root of a number
 * @n: integer
 * Return: root 0r -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
