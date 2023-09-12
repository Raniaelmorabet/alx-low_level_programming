#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = sqrt(size), m;

	if (array)
	{
		while (i < size)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] <= value && value <= array[j])
			{
				printf("Value found between indexes [%lu] and [%lu]\n", i, j);
				for (m = i; m <= j; m++)
				{
					printf("Value checked array[%lu] = [%d]\n", m, array[m]);
					if (array[m] == value)
						return (m);
				}
				return (-1);
			}
			i = j;
			j += sqrt(size);
		}
	}
	return (-1);
}
