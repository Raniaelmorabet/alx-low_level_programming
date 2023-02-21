#include <stdio.h>
/**
  * print_alphabet_x10 - prints alphabets in lower case 10 times.
  *
  * Return: always 0 (success)
  */
void print_alphabet_x10(void)
{
	char n = 'a';
	char x = 0;
		while (x <= 9)
		{
			while (n <= 'z')
			{
				putchar(n);
				n++;
			}
			putchar('\n');
			x++;
			n = 'a';
		}
}
