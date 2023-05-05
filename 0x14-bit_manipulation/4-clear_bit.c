#include <stdio.h>
/**
  * clear_bit - value of a bit to 0 at a given index
  *
  * @n: int received
  *
  * @index: index received
  *
  * Return: int
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);
	i = ~(1 << index);
	*n &= i;
	return (1);
}
