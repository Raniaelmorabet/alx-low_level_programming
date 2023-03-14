#include <unistd.h>

/**
  * _putchar - prints one character
  * @n: the character
  *
  * Return: returns 1 on printing
  */
int _putchar(char n)
{
	write(1, &n, 1);
	return (1);
}
