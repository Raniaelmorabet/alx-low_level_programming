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
	int d;

	c = '0';
	while (c <= '9')
	{
		b = c + 1;
		while (b <= '9')
		{
			d = b + 1;
			while (d <= '9')
			{
				putchar(c);
				putchar(b);
				putchar(d);
				if (c != '7')
				{
					putchar(',');
					putchar(' ');
				}
				d++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
