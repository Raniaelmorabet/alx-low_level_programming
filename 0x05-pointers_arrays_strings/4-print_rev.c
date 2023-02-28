#include <stdio.h>

/**
  * print_rev - a function that prints a string, in reverse
  *
  * @s: pointer
  *
  * Return: void
  */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != 0)
		length++;
	length--;
	while (length >= 0)
	{
		putchar(s[length]);
		length--;
	}
	putchar('\n');
}
