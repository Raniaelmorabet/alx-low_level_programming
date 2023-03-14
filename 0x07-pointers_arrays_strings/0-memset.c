#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: the buffer
  * @b: the byte
  * @n: how many bytes in the buffer
  *
  * Return: a pointer to the buffer
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
