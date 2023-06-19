#include <stdio.h>
#include "main.h"
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

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			return (1);
		};
	};

	return (0);
}
