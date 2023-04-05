#include "main.h"
/**
  * _print_rev_recursion - function that prints a string in reverse
  *
  * @s: string received
  */
void _print_rev_recursion(char *s)
{
	char *first_address;

	first_address = s;
	if (*s == '\0')
	{
		return;
	}

	s++;
	if (*s == '\0')
	{
		s--;
		_putchar(*s);
		return;
	}

	_print_rev_recursion(s);
	s--;
	_putchar(*s);
	if (*s == *first_address)
	{
		return;
	}

}
