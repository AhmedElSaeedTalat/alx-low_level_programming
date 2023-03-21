#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
  * _islower - checks for lower case charachter
  *
  * @c: charachter recieved to check
  *
  * Return: return value represents true or false
  */
int _islower(int c)
{
	int i;

	i = islower(c);

	if (i != 0)
	{
		return (1);
	};

	return (i);
}
