#include "main.h"
/**
  * check_len - function that checks how many digits in number
  *
  * @value: num to check
  *
  * Return: the count.
  */
int check_len(int value)
{
	int i, count_int;

	count_int = 0;
	if (value == 0)
	{
		count_int++;
	}

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
	int i, count_int, tmp, to_divide;
	char to_print;

	if (n < 0)
	{
		n =  -(n);
		_putchar('-');
	}

	count_int = check_len(n);

	for (i = 0; i < count_int; i++)
	{
		if (i == 0)
		{
			to_divide = 10;
		} else
		{
			to_divide = to_divide * 10;
		}
	}

	to_divide /= 10;
	for (i = 0; i < count_int; i++)
	{

		tmp = n / to_divide;
		tmp = tmp % 10;

		to_print = tmp + '0';
		_putchar(to_print);
		to_divide /= 10;
	}
}
