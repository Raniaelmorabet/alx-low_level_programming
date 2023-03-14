#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the main entry of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int tmp;
	int sign;

	sign = 1;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		tmp = n * -1;
		sign = -1;
	}
	else
		tmp = n;
	while (tmp > 9)
		tmp = tmp % 10;
	tmp = tmp * sign;
	if (tmp < 6 && tmp != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, tmp);
	else if (tmp == 0)
		printf("Last digit of %d is %d and is 0\n", n, tmp);
	else if (tmp > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, tmp);
	return (0);
}
