#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * malloc_checked - Write a function that allocates memory using malloc
  * @b: integer
  * Return: void
  */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
