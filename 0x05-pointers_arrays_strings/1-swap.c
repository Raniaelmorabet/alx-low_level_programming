#include "main.h"

/**
  * swap_int - swaps the value of two ints
  * @a: the first int
  * @b: the second int
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
