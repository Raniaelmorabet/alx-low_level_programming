#include <stdio.h>
/**
  * _puts_recursion - a function that prints a string, followed by a new line
  * @s: string
  * Return: void
  */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
