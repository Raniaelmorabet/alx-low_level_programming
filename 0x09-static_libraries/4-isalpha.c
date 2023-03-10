#include "main.h"
/**
  * _isalpha - a function that checks for alphabetic character
  *
  * @c: This is longer description of C
  *
  * Return: it returns 1 if it's a lower case or upper case
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
