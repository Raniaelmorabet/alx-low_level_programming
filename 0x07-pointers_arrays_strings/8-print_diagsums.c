#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of the two diagonals
  * @a: the matrix
  * @size: the length of the square matrix
  *
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (i <= (size * size))
	{
		sum1 += *(a + i);
		i += size + 1;
	}
	while (j <= (size * size) - size)
	{
		sum2 += *(a + j);
		j += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
