#include "main.h"

/**
  * _memcpy - copies memory erea
  * @dest: dest buffer
  * @src: src buffer
  * @n: the number of bytes to copy
  *
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
