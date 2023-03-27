#include "main.h"
/**
  * puts_half -  function that prints half of a string
  *
  * @str: string recieved
  */
void puts_half(char *str)
{
	int i, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	};

	len--;
	for (i = (len / 2) + 1; i <= len; i++)
	{
		_putchar(str[i]);
	};

	_putchar('\n');
}
