#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: printing of numbers from 1 to 100 and using
 * Fizz to print multiples of 3, Buzz for multiples of 5 and FizzBuzz for
 * multiples of of both
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");

	}
	printf("\n");
	return (0);
}
