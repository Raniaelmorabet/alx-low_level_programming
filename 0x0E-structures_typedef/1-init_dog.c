#include <stdio.h>
#include "dog.h"
/**
  * init_dog - a function that initialize a variable of type
  * @d: struct
  * @name: character
  * @age: float
  * @owner: character
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
