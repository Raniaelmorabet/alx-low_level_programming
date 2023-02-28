#include "main.h"

/**
  * rev_string - reverse a string
  * @s: the string
  *
  * Return: void
  */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char tmp;

	while (*(s + length) != 0)
		length++;
	length--;
	while (length >= i)
	{
		tmp = *(s + length);
		*(s + length) = *(s + i);
		*(s + i) = tmp;
		length--;
		i++;
	}
}
