#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that print the minimium number of coins to make change
 * @argc: argument
 * @argv: arguments
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	int total, counter;
	unsigned int i;
	char *p;
	int arr[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = strtol(argv[1], &p, 10);
	counter = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(arr[i]); i++)
			{
				if (total >= arr[i])
				{
					counter = counter + total / arr[i];
					total = total % arr[i];
				}
			}
		}
		if (total == 1)
			counter++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", counter);
	return (0);
}
