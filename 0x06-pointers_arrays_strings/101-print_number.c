#include "main.h"
/**
  * check_len - function that checks how many digits in number
  *
  * @value: num to check
  *
  */
int check_len(int value)
{
	int i, count_int;

	count_int = 0;

	for (i = 0; value != 0; i++)
	{
		value = value / 10;
		count_int++;
	}

	return (count_int);
}

/**
  * print_number - function that prints an integer
  *
  * @n: num received
  *
  */
void print_number(int n)
{
	int i, count_int, value, tmp, count, num, y, negative, val_0;
	char to_print;

	value = n;
	num = 1;

	if (n < 0)
	{
		n =  -(n);
		negative = 1;
	}

	if (n == 0)
	{
		val_0 = 0 + '0';
		_putchar(val_0);
	}

	count_int = check_len(value);
	count = count_int;

	for (i = 0; i < count_int; i++)
	{
		for (y = 1; y < count; y++)
		{
			num = num * 10;
		};

		tmp = n / num;
		tmp = tmp % 10;

		if (i == 0 && negative == 1)
		{
			_putchar(45);
		}

		to_print = tmp + '0';
		_putchar(to_print);
		num = 1;
		count--;
	}
}
