#include "main.h"
/**
 * print_diagsums - function that prints the sums of the two diagonals
 * @a: pointer that points to the matrix
 * @size: width of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, p, r = 0, l = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}