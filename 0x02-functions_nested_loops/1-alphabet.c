#include <stdio.h>
#include "main.h"
/**
  * void - Entry point
  *
  * Void: Always 0 (Void)
  */
void print_alphabit(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	};

	_putchar('\n');
}
