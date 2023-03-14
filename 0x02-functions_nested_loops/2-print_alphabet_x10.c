#include <stdio.h>

/**
  * print_alphabet_x10 - prints 10 times the alphabets
  *
  * Return: void (nothing)
  */
void print_alphabet_x10(void)
{
	int first = 'a';
	int i = 0;

	while (i < 10)
	{
		while (first <= 'z')
		{
			putchar (first);
			first++;
		}
		i++;
		first = 'a';
		putchar ('\n');
	}
}
