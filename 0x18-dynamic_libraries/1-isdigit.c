#include "main.h"

/**
 * _isdigit - function that check for digit from (0 to through to 9)
 * @c: char to check
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
