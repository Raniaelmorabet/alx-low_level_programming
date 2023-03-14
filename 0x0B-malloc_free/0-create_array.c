#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates array of chars
  * @size: the size of that array
  * @c: the character to fill the array with
  *
  * Return: pointer to the allocatec array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *) malloc(size);
	if (array == 0)
		return (NULL);
	while (i < size)
	{
		*(array + i) = c;
		i++;
	}
	return (array);
}
