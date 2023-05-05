#include "main.h"
/**
  * flip_bits - number of bits you would need to flip
  *
  * @n: received number
  *
  * @m: received number
  *
  * Return: int
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num, counter;

	num = n ^ m;
	counter = 0;
	while (num > 0)
	{
		if (num & 1)
			counter++;
		num >>= 1;
	}
	return (counter);
}
