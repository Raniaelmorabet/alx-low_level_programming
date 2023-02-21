#include <stdio.h>
#include "main.h"

/**
  * print_sign - a function that prints the sign of a number
  *
  * @n: This is longer description of N
  *
  * Return: returns 1 if it's greater than 0 and returns 0 if its 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
	return (0);
}
