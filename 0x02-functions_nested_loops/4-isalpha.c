#include <stdio.h>
#include <ctype.h>
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
	int check = isalpha(c);

	if (check != 0)
	{
		return (1);
	};

	return (check);
}
