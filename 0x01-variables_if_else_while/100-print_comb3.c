#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i, y;

	for (i = 48; i <= 57; i++)
	{
		for (y = i + 1; y <= 57; y++)
		{
			putchar(i);
			putchar(y);
			if (y == 57 && i == 56)
			{
				continue;
			};

			putchar(44);
			putchar(32);
		};

	};

	putchar('\n');
	return (0);
}
