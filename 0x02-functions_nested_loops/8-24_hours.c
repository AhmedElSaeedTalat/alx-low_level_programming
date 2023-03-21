#include "main.h"
/**
  * jack_bauer -  a function that prints every minute of the day of Jack Bauer.
  */
void jack_bauer(void)
{
	int i, y, z, x, checker;

	for (i = 48; i < 51; i++)
	{
		for (y = 48; y <= 57; y++)
		{
			if (i == 50 && y == 52)
			{
				checker = 1;
				break;
			};

			for (z = 48; z < 54; z++)
			{
				if(checker == 1)
				{
					break;
				};

				for (x = 48; x <= 57; x++)
				{
					if(checker == 1)
					{
						break;
					};

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
