#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - fees the dog
  * @d: the dog
  *
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
