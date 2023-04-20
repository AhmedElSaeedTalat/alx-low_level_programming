#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - print number f strings
  *
  * @separator: separator string
  *
  * @n: number of arguments
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *st;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		st = va_arg(arg, char *);
		if (st == NULL)
		{
			printf("(nil)");
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
			continue;
		}

		printf("%s", st);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(arg);
}
