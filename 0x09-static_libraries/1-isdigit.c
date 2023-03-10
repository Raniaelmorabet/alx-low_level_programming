#include "main.h"
/**
  * _isdigit -  a function that checks for a digit 0 through 9
  *
  * @c: prints c
  *
  * Return: 0
  */
int _isdigit(int c)
{
	int n = '0';
	int k = '9';

	if (c >= n && c <= k)
		return (1);
	else
		return (0);
}
