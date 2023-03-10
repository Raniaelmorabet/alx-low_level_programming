#include "main.h"
/**
  * _memcpy - a function that copies memory area
  * @dest: charcter
  * @src: character
  * @n: integer
  * Return: char
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
