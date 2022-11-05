#include <stdio.h>
/**
 * main - program that prints its name followed by a new line
 * @argc: argumment
 * @argv: arguments
 *
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
