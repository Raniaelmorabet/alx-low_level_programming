#include <stdio.h>

/**
 * main - entry line
 * @void: no argument
 * Return: alway 0
 */
int main(void)
{
	long int i, n;

	i = 612852475143;
	n = 2;
	while (n <= i)
	{
		if (i % n == 0)
		{
			i = i / n;
			n--;
		}
		n++;
	}
	printf("%lu\n", n);
	return (0);
}
