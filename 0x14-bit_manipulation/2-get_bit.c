#include "main.h"
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
	unsigned long int i;

	i = 0;
	while (n != 0)
	{
		if (i == index)
			return (n & 1);
		n >>= 1;
		i++;
	}
	return (0);
}
