#include <stdio.h>
#include "main.h"
/**
  * print_sign - print sign of digits
  *
  * @n: received argument to check for sign
  *
  * Return: value 1 0 -1
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	};

	if (n == 0)
	{
		_putchar(48);
		return (0);
	};

	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	return (0);
}
