#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry program
  *
  * Return: always 0 (success)
  */
int main(void)
{
	int n;
	int lastd;
	int sign;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		lastd *= -1;
	}
	while (lastd > 9)
	{
		lastd = lastd % 10;
	}
	lastd *= sign;
	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
