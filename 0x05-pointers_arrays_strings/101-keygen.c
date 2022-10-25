#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate random password for the program 101-crackme
 * Return: 0 success
 */

int main(void)
{
	int x = 0, y = 0;
	time_t ti;

	srand((unsigned int) time(&ti));
	while (y < 2772)
	{
	x = rand() % 128;
	if ((y + x) > 2772)
	break;
	y = y + x;
	printf("%c", x);
	}
	printf("%c\n", (2772 - y));
	return (0);
}
