#include "main.h"
#include <stdio.h>

/**
  * _isdigit - tests the string is an representation of an iteger
  * @s: the string
  *
  * Return: 0 if it is not an int or 1 if it is
  */
int _isdigit(char *s)
{
	if (*s && *s == '-')
		s++;
	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
			return (0);
		s++;
	}
	return (1);
}

/**
  * atoi - convert string of ints to integers
  * @s: the string representation of the integer
  *
  * Return: int
  */
int atoi(char *s)
{
	int num = 0;
	int sign = 1;

	if (*s && *s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s && *s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	return (num * sign);
}

/**
  * main - the entry point of our program
  * @argc: the number of arguments
  * @argv: the 2d pointer of arguments
  *
  * Return: always 0
  */
int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;

	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}
	while (i < argc)
	{
		if (!_isdigit(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i++]);
	}
	printf("%d\n", sum);
	return (0);
}
