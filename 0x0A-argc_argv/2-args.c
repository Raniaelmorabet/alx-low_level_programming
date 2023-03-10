#include "main.h"
#include <stdio.h>

/**
  * main - the entry point of our program
  * @argc: the number of arguments
  * @argv: the 2d pointer of arguments
  *
  * Return: always 0
  */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
