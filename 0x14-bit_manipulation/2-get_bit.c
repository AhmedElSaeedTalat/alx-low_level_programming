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
  * get_bit - get bit at index
  *
  * @n: number received
  *
  * @index: index received
  *
  * Return: bit at index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, bits;

	bits = bits_needed(n);
	if (index >= bits)
		return (0);

	i = 0;
	while (n != 0 && i < bits)
	{
		if (i == index)
			return (n & 1);
		n >>= 1;
		i++;
	}
	return (0);
}
