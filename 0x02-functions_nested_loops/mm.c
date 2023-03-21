#include <stdio.h>
#include "main.h"
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int ch = 'm';
	int g = _islower(ch);

	_putchar(g+'0');
	putchar('\n');

	return (0);
}
