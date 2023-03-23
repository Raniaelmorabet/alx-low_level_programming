#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add- adds two numbers
  * @a: the first number
  * @b: the second number
  *
  * Return: the result of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub -subtract two numbers
  * @a: the first number
  * @b: the second number
  *
  * Return: the result of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplie two numbers
  * @a: the first number
  * @b: the second number
  *
  * Return: the result of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides two numbers
  * @a: the first number
  * @b: the second number
  *
  * Return: the result of a and b
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
  * op_mod - returns the remainder of the division of a by b
  * @a: the first number
  * @b: the second number
  *
  * Return: the result of a and b
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
