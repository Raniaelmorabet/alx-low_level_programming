#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j = 0, m;

	if (array)
	{
		while (i < size && array[i] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i *= 2;
		}
		j = i < size - 1 ? i : size - 1;
		i /= 2;
		printf("Value found between indexes [%lu] and [%lu]\n", i, j);
		while (i <= j)
		{
			m = (i + j) / 2;
			printf("Value checked array[%lu] = [%d]\n", m, array[m]);
			if (array[m] == value)
				return (m);
			if (array[m] < value)
				i = m + 1;
			else
				j = m - 1;
		}
	}
	return (-1);
}
