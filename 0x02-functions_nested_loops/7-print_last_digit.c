#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to be parse in the question
 *
 * Return: value of the last digit.
 */

int print_last_digit(int n)
{
int num = n % 10;
if (num < 0)
num = num * -1;
_putchar(num + '0');
return (num);
}

