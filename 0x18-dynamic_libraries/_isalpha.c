#include <stdio.h>
#include "main.h"
/**
  * _isalpha - checks for alphabetic character
  *
  * @c: received charachter to check
  *
  * Return: check value
  */
int _isalpha(int c)
{
	int i;

	for (i = 65; i <= 122; i++)
	{
		if (i > 90 && i < 97)
		{
			continue;
		};

		if (i == c)
		{
			return (1);
		};

	}

	return (0);
}
