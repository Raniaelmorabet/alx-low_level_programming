#include <stdio.h>

/**
  * jack_bauer - prints every minute of the day
  *
  * Retrun: void
  */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i <= 23)
	{
		while (j <= 59)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(':');
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			putchar('\n');
			j++;
		}
		j = 0;
		i++;
	}
}
