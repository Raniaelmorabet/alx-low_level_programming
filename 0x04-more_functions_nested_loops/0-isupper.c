#include <stdio.h>

/**
  * _isupper - checkes for uppercase character
  * @c: the character
  *
  * Return: 1 if there is uppercase or 0 otherwise
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
