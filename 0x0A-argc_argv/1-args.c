#include <stdio.h>
/**
 * main - program that prints the number of arguments passed to it
 * @argc: argument
 * @argv: arguments
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
