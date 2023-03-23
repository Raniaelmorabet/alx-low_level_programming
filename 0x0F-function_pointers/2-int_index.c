#include <stdlib.h>

/**
  * int_index - function that searches for an integer
  * @array: array of integers
  * @size: size of the array
  * @cmp: pointer to the call back
  *
  * Return: the int that we are searching for
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
		i++;
	}
	return (-1);
}
