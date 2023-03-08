#include <stdio.h>
#include "main.h"
/**
  * square_root -  a function that returns a root square
  * @n: integer
  * @y: integer
  * Return: 0
  */
int square_root(int n, int y)
{
	if (n * n == y)
		return (n);
	else if (n * n > y)
		return (-1);
	else
		return (square_root(n + 1, y));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: the natural square root found
 */
int _sqrt_recursion(int n)
{
	int a = 1;

	return (square_root(a, n));
}
