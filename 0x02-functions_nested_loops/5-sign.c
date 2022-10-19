#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: the number to check for its sign
 * Return: 1 and print + if n isa greater than zero
 *otherwise 0 and prints 0 if n is zero and
*-1 and prints - if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

