#include "main.h"
/**
  * _isdigit -  a function that checks for a digit (0 through 9)
  *
  * @c: arguemnt recieved
  *
  * Return: Always 0 (Success)
  */
int _isdigit(int c)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (c == i)
		{
			return (1);
		};
	};

	return (0);
}
