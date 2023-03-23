#include <stdio.h>
#include "function_pointers.h"
/**
  * print_name - a function that prints a name
  * @name: string
  * @f: pointer to a function
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
