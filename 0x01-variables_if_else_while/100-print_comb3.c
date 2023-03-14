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
	int c;
	int b;

	c = '0';
	while (c <= '9')
	{
		b = c + 1;
		while (b <= '9')
		{
			putchar(c);
			putchar(b);
			if (c != '8')
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
