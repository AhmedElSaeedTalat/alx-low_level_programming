#include "main.h"
/**
  * convert_number - a function that converts numbers into a character
  *
  * @n: recieved int to convert
  */
void convert_number(int n)
{
	int first, second;

	if (n > 9)
	{
		first = (n / 10) + '0';
		second = (n % 10) + '0';
		_putchar(first);
		_putchar(second);
	} else
	{
		first = n + '0';
		_putchar(first);
	};

}
/**
  * more_numbers - a function that prints 10 times the numbers
  */
void more_numbers(void)
{
	int i, y;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y < 15; y++)
		{
			convert_number(y);
		};

		_putchar('\n');
	};

}
