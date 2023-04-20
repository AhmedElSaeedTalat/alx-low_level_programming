#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  * sum_them_all - sum all arguments
  *
  * @n: num of arguments
  *
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, num, sum;

	if (n <= 0)
	{
		return (0);
	}

	va_start(arg, n);
	num = sum = 0;
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		sum += num;
	}

	va_end(arg);
	return (sum);
}
