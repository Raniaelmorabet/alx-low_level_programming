#include <stdio.h>

/**
  * main - entry point of our program
  *
  * Return: always 0 (secusses)
  */
int main(void)
{
	int i;
	long int sum;

	i = 0;
	sum = 0;
	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
			i++;
		}
		else
			i++;
	}
	printf("%ld\n", sum);
	return (0);
}
