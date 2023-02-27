#include <stdio.h>

/**
  * swap_int - a function that swaps the values of two integers.
  * @b: a pointer
  * @a: a pointer
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
