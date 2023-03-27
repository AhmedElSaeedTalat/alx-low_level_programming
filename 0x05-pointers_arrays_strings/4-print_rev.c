#include "main.h"
/**
  * print_rev -  function that prints a string, in reverse
  *
  * @s: string recieved to reverse
  */
void print_rev(char *s)
{
	int i, length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	};

	for (i = length ; i > -1; i--)
	{
		_putchar(s[i]);
	};

	_putchar('\n');
}
