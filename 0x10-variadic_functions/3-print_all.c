#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  * check_spec - check cases and print
  *
  * @ptr: type of variable list
  *
  * @separator: sepator between strings
  *
  * @arg: arguments received
  *
  * Return: pointer list to types
  */
const char *check_spec(const char *ptr, char *separator, va_list arg)
{
	unsigned int i;
	float f;
	char *s, c;

	switch (*ptr)
	{
		case 'c':
			c = va_arg(arg, int);
			printf("%s%c", separator, c);
			break;
		case 'i':
			i = va_arg(arg, int);
			printf("%s%d", separator, i);
			break;
		case 'f':
			f = va_arg(arg, double);
			printf("%s%f", separator, f);
			break;
		case 's':
			s = va_arg(arg, char *);
			if (s == NULL)
			{
				printf("%s(nil)", separator);
			} else
			{
				printf("%s%s", separator, s);
			}

			break;
		default:
			break;
	}

	ptr++;
	return (ptr);
}

/**
  * print_all - prints anything.
  *
  * @format: type variable
  */
void print_all(const char * const format, ...)
{
	va_list arg;
	const char *ptr;
	char *separator;

	if (format == NULL)
		return;

	separator = "";
	ptr = format;
	va_start(arg, format);
	while (*ptr != '\0')
	{
		ptr = check_spec(ptr, separator, arg);
		separator = ", ";
	}

	printf("\n");
	va_end(arg);
}
