#include <stdlib.h>
#include <stdio.h>
/**
  * create_array - a function that creates an array of chars, and initializes
  * @c: character
  * @size: integer
  * Return: always 0
  */
char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int i;

	pt = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		pt[i] = c;
	}
	if (size == 0)
		return (NULL);
	else
		return (pt);
free(pt);
return (pt);
}
