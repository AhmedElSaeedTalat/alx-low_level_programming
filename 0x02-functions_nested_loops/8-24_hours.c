#include "main.h"
/**
  * jack_bauer -  a function that prints every minute of the day of Jack Bauer.
  */
void jack_bauer(void)
{
	int i, y, z, x;

	for (i = 48; i < 51; i++)
	{
		for (y = 48; y < 52; y++)
		{
			for (z = 48; z < 54; z++)
			{
				for (x = 48; x <= 57; x++)
				{
					_putchar(i);
					_putchar(y);
					_putchar(58);
					_putchar(z);
					_putchar(x);
					_putchar('\n');
				}
			}
		}
	}
}
