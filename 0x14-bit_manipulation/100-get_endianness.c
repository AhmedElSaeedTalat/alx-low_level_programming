#include <stdio.h>
/**
  * get_endianness - check indiannes
  *
  * Return: 0 if big endian, 1 if little endian
  */
int get_endianness(void)
{
	int x, *ptr;

	x = 12345678;
	ptr = &x;
	if (*ptr == 1)
		return (0);

	return (1);
}
