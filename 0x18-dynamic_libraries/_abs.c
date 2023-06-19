#include <stdio.h>
/**
  * _abs - a function that computes the absolute value of an integer.
  *
  * @i: argumment recieved
  *
  * Return: Always 0 (Success)
  */
int _abs(int i)
{
	if (i < 0)
	{
		int y;

		y = -(i);
		return (y);
	};

	return (i);
}
