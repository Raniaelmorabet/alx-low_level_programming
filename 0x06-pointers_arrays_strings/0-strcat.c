#include <stdio.h>

/**
  * _strcat - a function that concatenates two strings
  *
  * @dest: a pointer
  *
  * @src: a pointer
  *
  * Return: 0
  */
char *_strcat(char *dest, char *src)
{
	int n1 = 0;
	int n2 = 0;

	while (dest[n1] != 0)
	{
		n1++;
	}
	while (src[n2] != 0)
	{
		dest[n1] = src[n2];
		n2++;
		n1++;
	}
	return (dest);
}
