#include <stdio.h>

/**
  * print_alphabet - prints alphabets in lowercase
  *
  * Retrun: void
  */
void print_alphabet(void)
{
	char first = 'a';

	while (first <= 'z')
	{
		putchar (first);
		first++;
	}
	putchar ('\n');
}
