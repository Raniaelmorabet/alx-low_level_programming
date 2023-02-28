#include <stdio.h>
/**
  * _puts -  a function that prints a string, followed by a new line
  *
  * @str: a pointer
  *
  * Return: void
  */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
