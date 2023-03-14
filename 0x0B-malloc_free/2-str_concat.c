#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: pointer to the new str
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int len = 0;
	char *new_str;

	while (s1 && *(s1 + i))
	{
		len++;
		i++;
	}
	i = 0;
	while (s2 && *(s2 + i))
	{
		len++;
		i++;
	}
	i = 0;
	len += 1;
	new_str = (char *) malloc(len);
	if (!new_str)
		return (NULL);
	while (s1 && *(s1 + i))
	{
		*(new_str + j) = *(s1 + i);
		i++;
		j++;
	}
	i = 0;
	while (s2 && *(s2 + i))
	{
		*(new_str + j) = *(s2 + i);
		i++;
		j++;
	}
	*(new_str + j) = '\0';
	return (new_str);
}
