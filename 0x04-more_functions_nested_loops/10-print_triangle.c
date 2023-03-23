#include "main.h"
/**
  * print_triangle - a function that prints a triangle
  *
  * @size: recieved size
  */
void print_triangle(int size)
{
	int i, y, z;

	for (i = 1; i <= size; i++)
	{
		for (z = size - i; z > 0; z--)
		{
			_putchar(32);
		};

		for (y = 1; y <= i; y++)
		{
			_putchar(35);
		};

		_putchar('\n');
	};

	if (size <= 0)
	{
		_putchar('\n');
	}
}

