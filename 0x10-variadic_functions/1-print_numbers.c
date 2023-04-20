#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  * print_numbers - print numbers separated
  *
  * @separator: string separetor
  *
  * @n: number of arguments
  *
  * Return: Always 0 (Success)
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, num;

	va_start(arg, n);
	num = 0;
	if (n == 0)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		if (separator == NULL || i == n - 1)
			printf("%d", num);
		else
			printf("%d%s", num, separator);
	}

	printf("\n");

}
