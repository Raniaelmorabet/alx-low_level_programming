#include <stdio.h>
#include "main.h"

/**
  * print_triangle - prints a triangle
  * @size: size of triangle
  *
  * Return: void
  */
void print_triangle(int size)
{
	int i = 1;
	int j = size - 1;
	int k = 1;

	if (size > 0)
	{
		while (i <= size)
		{
			while (j)
			{
				_putchar(' ');
				j--;
			}
			while (k)
			{
				_putchar('#');
				k--;
			}
			_putchar('\n');
			i++;
			j = size - i;
			k = i;
		}
	}
	else
		_putchar('\n');
}
