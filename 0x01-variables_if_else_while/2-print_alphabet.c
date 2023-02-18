#include <stdio.h>
/**
  * main - Entry program
  *
  * Return: always 0 (success)
  */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
