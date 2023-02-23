#include <stdio.h>
#include "main.h"

/**
  * print_square - prints a square
  * @size: the size of square
  *
  * Return: void
  */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			j = 0;
			i++;
		}
	}
	else
		_putchar('\n');
}
