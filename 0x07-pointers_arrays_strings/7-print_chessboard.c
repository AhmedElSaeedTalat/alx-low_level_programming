#include "main.h"
/**
  * print_chessboard - function that prints the chessboard
  *
  * @a: char
  */
void print_chessboard(char (*a)[8])
{
	int i, y;

	for (i = 0; i < 8; i++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[i][y]);
		}

		_putchar('\n');
	}
}
