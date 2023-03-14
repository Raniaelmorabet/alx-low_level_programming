#include <stdio.h>

/**
  * main - entry point of the program
  *
  * Return: always 0
  */
int main(void)
{
	unsigned long first = 1;
	unsigned long second = 2;
	int i = 0;

	while (i < 50)
	{
		printf("%lu", first);
		if (i < 49)
		{
			second += first;
			first = second - first;
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
