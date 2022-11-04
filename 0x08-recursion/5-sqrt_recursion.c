#include "main.h"
/**
 * check - function that returns the natural sqaure root of a number
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
