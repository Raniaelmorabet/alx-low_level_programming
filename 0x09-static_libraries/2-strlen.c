#include "main.h"

/**
  * _strlen - a function that returns the length of a string
  *
  * @s: a pointer
  *
  * Return: always 0 (success)
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
