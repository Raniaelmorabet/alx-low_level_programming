#include "main.h"

/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: the string
  * @accept: the set of bytes
  *
  * Return: pointer to the first accurrence of any bytes in the s
  */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (*(s + i))
	{
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
