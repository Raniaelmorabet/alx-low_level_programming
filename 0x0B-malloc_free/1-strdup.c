#include "main.h"
#include <stdlib.h>

/**
  * _strdup - dupplicates the string passed to it
  * @str: pointer to the string
  *
  * Return: pointer to the new allocated string
  */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *new_str;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
	{
		len++;
		i++;
	}
	i = 0;
	new_str = (char *) malloc(len + 1);
	if (new_str == 0)
		return (NULL);
	while (*(str + i))
	{
		*(new_str + j) = *(str + i);
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
