#include <stdio.h>

/**
  * print_alphabet - prints alphabet in lower cases.
  *
  * Return: always 0 (success)
  */
void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar (n);
		n++;
	}
	putchar ('\n');
}
