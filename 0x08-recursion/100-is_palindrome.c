#include "main.h"
/**
 * _strlen_recursion - print length of string
 * @s: the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * checker - check for palidrome
 * @s: base address of string
 * @i: left ind
 * @j: right ind
 * Return: 1 if s palidrome, 0 otherwise
 */
int checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (checker(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - check if s is palindrome
 * @s: string address
 * Return: 1 if success 0 otherwise
 */
int is_palindrome(char *s)
{
	return (checker(s, 0, _strlen_recursion(s) - 1));
}
