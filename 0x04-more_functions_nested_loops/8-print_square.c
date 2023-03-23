#include "main.h"
/**
  * print_square - a function that prints a square
  *
  * @size: arg for the size of the square
  */
void print_square(int size)
{
	int i, y;

	if (size <= 0)
	{
		_putchar('\n');
	};

	for (i = 0; i < size; i++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar(35);
		};

		_putchar('\n');
	};
}
