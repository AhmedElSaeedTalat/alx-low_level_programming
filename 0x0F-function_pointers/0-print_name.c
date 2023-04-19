#include <stdio.h>
/**
  * print_name - prints a name
  *
  * @name: name received
  *
  * @f: pointer received
  */
void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *);

	p = f;
	(*p)(name);
}
