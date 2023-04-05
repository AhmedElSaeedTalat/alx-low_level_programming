#include <stdio.h>
/**
  * _pow_recursion - value of x raised to the power of y
  *
  * @x: number received to process
  *
  * @y: raised to the power of y
  *
  * Return: result of power
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	x = x * 1;
	return (x * _pow_recursion(x, y - 1));
}
