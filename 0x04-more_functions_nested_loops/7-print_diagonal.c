#include "main.h"
/**
  * print_spaces - print needed spaces
  *
  * @n: number of spaces
  */
void print_spaces(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(32);
	}
}
/**
  * print_diagonal -  a function that draws a diagonal line on the terminal
  *
  * @n: recieved int
  */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				print_spaces(i);
			};

			_putchar(92);
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
