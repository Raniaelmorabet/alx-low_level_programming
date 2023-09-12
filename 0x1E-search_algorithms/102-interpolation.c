#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, m;

	if (array)
	{
		while (i <= j)
		{
			m = i + (((double)(j - i) / (array[j] - array[i])) *
					(value - array[i]));
			if (m < size)
				printf("Value checked array[%lu] = [%d]\n", m, array[m]);
			else
			{
				printf("Value checked array[%lu] is out of range\n", m);
				break;
			}
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
