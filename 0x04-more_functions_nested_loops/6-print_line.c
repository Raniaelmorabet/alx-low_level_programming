#include <stdio.h>
#include "main.h"

/**
  * print_line - draws a straight line
  * @n: the lenght of the line
  *
  * Return: void
  */
void print_line(int n)
{
	if (n > 0)
	{
		while (n)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
