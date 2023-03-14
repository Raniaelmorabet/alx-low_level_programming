#include <stdio.h>

/**
  * _abs - coputes the absolute value of a num
  * @n: the number beeing checked
  *
  * Return: the num as absolute
  */
int _abs(int n)
{
	int num = n;

	if (n < 0)
		return (num * -1);
	else
		return (num);
}
