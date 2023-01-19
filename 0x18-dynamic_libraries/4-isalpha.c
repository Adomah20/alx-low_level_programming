#include "main.h"
/**
 * _isalpha - checking if character entered is alphabet
 * @c: the char to be parsed for check
 * Return: 1 if character is lower or upper, o othewise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||  (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
