#include "main.h"
/**
  * _islower - a function that checks for lowercase character.
  *
  * @c: This is longer description of C
  *
  * Return: reurn 0 if its upper case and 1 if its lower case
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
