#include <stdio.h>
#include <stdlib.h>
/**
  * _power - power 2 to convert base 2
  *
  * @i: raised to power of i
  *
  * Return: i
  */
unsigned int _power(unsigned int i)
{
	unsigned int y, res;

	res = 1;
	for (y = 0; y < i; y++)
	{
		res *= 2;
	}
	return (res);
}
/**
  * _reverse - reverse binary string
  *
  * @b: received string to reverse
  *
  * Return: reversed string
  */
char *_reverse(const char *b)
{
	int i, y, counter;
	const char *copy;
	char *str;

	copy = b;
	counter = 0;
	while (*copy != '\0')
	{
		counter++;
		copy++;
	}
	str = malloc(sizeof(char) * counter);
	counter--;
	for (i = counter, y = 0; i >= 0; i--, y++)
	{
		str[y] = b[i];
	}
	str[y] = '\0';
	return (str);
}

/**
  * binary_to_uint - binary to unsignedint
  *
  * @b: received string 0 and 1
  *
  * Return: converted int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, res;
	char *reversed;

	if (b == NULL)
		return (0);

	reversed = _reverse(b);

	i = res = 0;
	while (reversed[i] != '\0')
	{
		if (reversed[i] == '1')
		{
			res += _power(i);
		} else if (reversed[i] != '0' && reversed[i] != '1')
			return (0);
		i++;
	}
	return (res);
}
