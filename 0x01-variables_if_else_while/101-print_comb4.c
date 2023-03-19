#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i, y, z;

	for (i = 48; i <= 57; i++)
	{
		for (y = i + 1; y <= 57; y++)
		{
			for (z = y + 1; z <= 57; z++)
			{
				putchar(i);
				putchar(y);
				putchar(z);
				if (i == 55 && y == 56 && z == 57)
				{
					continue;
				};
				putchar(44);
				putchar(32);
			}
		}
	}

	return (0);
}
