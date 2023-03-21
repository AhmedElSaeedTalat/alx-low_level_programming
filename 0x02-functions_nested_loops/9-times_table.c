#include "main.h"
/**
  * convert_char - convert to charachters
  *
  * @n: recieved character to convert
  */

void convert_char(int n)
{
	int first_digit, second_digit;

	first_digit = (n / 10) + '0';
	second_digit = (n % 10) + '0';
	_putchar(first_digit);
	_putchar(second_digit);
}

/**
  * times_table - a function that prints the 9 times table, starting with 0.
  */
void times_table(void)
{
	int i, y, sum;

	for (i = 0; i < 10 ; i++)
	{
		sum = 0;
		for (y = 0; y < 10; y++)
		{
			if (y == 0)
			{
				_putchar(48);
				continue;
			};

			sum = sum + i;
			if (sum > 9)
			{
				_putchar(44);
				_putchar(32);
				convert_char(sum);
			} else
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(sum + '0');
			}
		};

		_putchar('\n');
	}
}
