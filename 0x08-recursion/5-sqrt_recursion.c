#include <stdio.h>
/**
  * divide_num - natural square root of a number
  *
  * @n: int received to return square root
  *
  * @i: counter
  *
  * Return: square root
  */
int divide_num(int n, int i)
{
	if (i == 1 || n < 0)
	{
		return (-1);
	} else if (n % i == 0)
	{
		if (i * i == n)
		{
			return (i);
		}
	}

	return (divide_num(n, i - 1));
}
/**
  * _sqrt_recursion - natural square root of a number
  *
  * @n: int received to return square root
  *
  * Return: square root
  */
int _sqrt_recursion(int n)
{
	int i;

	if (n == 1)
	{
		return (1);
	};

	i = divide_num(n, n - 1);

	return (i);
}
