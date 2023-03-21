#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * new_dog - creates a new dog
  * @name: the name of the new dog
  * @age: the age of the new dog
  * @owner: the owner of the new dog
  *
  * Return: new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	/* reserving memory to struct*/
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	/* Cpunting name pointer*/
	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
{
