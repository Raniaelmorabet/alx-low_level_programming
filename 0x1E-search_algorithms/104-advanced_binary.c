#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, m, k;

	if (array)
	{
		while (i <= j)
		{
			printf("Searching in array: ");
			for (k = i; k < j; k++)
				printf("%d, ", array[k]);
			printf("%d\n", array[k]);
			m = (i + j) / 2;
			if (array[m] == value)
			{
				if (m == 0 || array[m - 1] < value)
					return (m);
				j = m;
			}
			else if (array[m] < value)
				i = m + 1;
			else
				j = m;
		}
	}
	return (-1);
}
