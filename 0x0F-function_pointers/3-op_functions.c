#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - addition
  * @a: first num
  * @b: second num
  * Return: int
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtraction
  * @a: first num
  * @b: second num
  * Return: int
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplication
  * @a: first num
  * @b: second int
  * Return: int
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division
  * @a:first int
  * @b: second int
  * Return: int
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function for modulo
  * @a: first int
  * @b: second int
  * Return: int
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
