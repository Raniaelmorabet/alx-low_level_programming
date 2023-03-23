#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - a function that returns the sum of all its parameters
  * @n: integer
  * Return: always 0
  */
int sum_them_all(const unsigned int n, ...)
{
		va_list sums;
		int result = 0;
		unsigned int i;

		va_start(sums, n);
		for (i = 0; i < n; i++)
			result = result + va_arg(sums, int);
		va_end(sums);
		if (n == 0)
			return (0);
		else
			return (result);
}
