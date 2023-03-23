#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  * print_numbers - a function that prints numbers, followed by a new line
  * @separator: string to be printed between numbers
  * @n: integer
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(print);
	printf("\n");
}
