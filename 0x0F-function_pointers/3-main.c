#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - entry point of a program
  * @ac: number of arguments
  * @av: array of arguments
  *
  * Return: always returns 0
  */
int main(int ac, char **av)
{
	int (*operator)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(av[2]);
	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operator(atoi(av[1]), atoi(av[3])));
	return (0);
}
