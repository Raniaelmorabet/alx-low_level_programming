#include "lists.h"
#include <stdio.h>
/**
  * listint_len - a function that returns the number of elements
  * @h: pointer
  * Return: integer
  */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != 0)
	{
		i++;
		h = h->next;
	}
	return (i);
}
