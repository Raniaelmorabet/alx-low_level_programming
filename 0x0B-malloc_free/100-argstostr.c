#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concatenates all the arguments
  * @ac: number of arguments
  * @av: the 2d array to the araguments
  *
  * Return: pointer to the string
  */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (*(*(av + i) + j))
		{
			len++;
			j++;
		}
		j = 0;
		len++;
		i++;
	}
	str = (char *) malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ac)
	{
		while (*(*(av + i) + j))
		{
			*(str + k) = *(*(av + i) + j);
			j++;
			k++;
		}
		j = 0;
		*(str + k) = '\n';
		k++;
		i++;
	}
	*(str + k) = '\0';
	return (str);
}
