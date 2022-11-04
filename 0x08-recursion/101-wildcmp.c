#include "main.h"
/**
 * checker - checks for two identical strings
 * @s1: string one
 * @s2: string two
 * @i: left ind
 * @j: index
 * Return: 1 if identical 0 otherwise
 */

int checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (checker(s1, s2, i + 1, j) || checker(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - function to check for identical strings
 * @s1: string one
 * @s2: string two
 * Return: 1 if identical
 */
int wildcmp(char *s1, char *s2)
{
	return (checker(s1, s2, 0, 0));
}
