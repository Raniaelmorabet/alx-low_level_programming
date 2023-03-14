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
  * @argc: the number of the program arguments
  * @argv: the array of the  arguments
  *
  * Return: always 0
  */
int main(int argc, char **argv)
{
	int change = 0;
	int money = 0;
	int i = 0;
	int values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (money)
	{
		if (money < values[i])
		{
			i++;
			continue;
		}
		money -= values[i];
		change++;
	}
	printf("%d\n", change);
	return (0);
}
