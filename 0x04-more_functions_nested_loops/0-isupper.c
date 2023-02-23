#include <stdio.h>

/**
  * _isupper - a function that checks for uppercase character
  *
  * @c: prints c
  *
  * Return: 0
  */
int _isupper(int c)
{
	int n = 'A';
	int k = 'Z';

	if (c >= n && c <= k)
		return (1);
	else
		return (0);
}
