#include "main.h"
/**
  * bits_needed - calculate number of bits needed
  *
  * @n: received number
  *
  * Return: number of bits needed
  */
int bits_needed(unsigned long int n)
{
	int counter;

	counter = 0;
	while (n != 0)
	{
		n >>= 1;
		counter++;
	}
	return (counter);
}

/**
  * print_binary - binary representation of a number
  *
  * @n: received number
  */
void print_binary(unsigned long int n)
{
	int bits, binary;

	binary = 1UL;
	bits = bits_needed(n);
	if (n > 0)
	{
		bits--;
		binary = 1UL << bits;
	}
	while (binary != 0)
	{
		if (binary & n)
			_putchar('1');
		else
			_putchar('0');
		binary >>= 1;
	}
}
