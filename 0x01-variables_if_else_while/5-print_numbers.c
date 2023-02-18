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
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
