#include "main.h"
#include <stdio.h>

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
	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
}
