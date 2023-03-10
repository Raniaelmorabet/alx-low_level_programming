#include <unistd.h>

/**
  * _putchar - function that prints one character
  * @n: a character that we want to print
  *
  * Return: (1)
  */
int _putchar(char n)
{
	write(1, &n, 1);
	return (1);
}
