#include <stdio.h>
/**
 * main - program that print all the argument it recieve
 * @argc: argument
 * @argv:arguments
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
