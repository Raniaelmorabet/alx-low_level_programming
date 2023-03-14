#include <stdio.h>
#include "main.h"

/**
  * more_numbers - print 0 to 14, 10 times
  *
  * Return: void
  */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		while (i < 15)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
		i = 0;
		j++;
	}
}
