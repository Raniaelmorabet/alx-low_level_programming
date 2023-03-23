#include <stdio.h>
#include "function_pointers.h"
/**
  * array_iterator - a function that executes a function given as a parameter
  * @array: array
  * @action: pointer to a function
  * @size: size of the array
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
		action(array[i]);
		}
	}
}
