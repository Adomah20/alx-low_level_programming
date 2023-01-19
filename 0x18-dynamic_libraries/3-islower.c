#include "main.h"
/**
 * _islower - check if a character is lower case
 * @c: this is the character to be checked
 * Return: 1 if the character is lower case, otherwise 0.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
