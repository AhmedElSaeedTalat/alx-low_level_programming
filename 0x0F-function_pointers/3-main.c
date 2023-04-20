#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
  * main - Entry point
  *
  * @argc: num of arguments
  *
  * @argv: arguments received
  *
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int a, b, res;
	int (*get_op)(int, int);
	char *s;
	(void) argc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	switch (*s)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			get_op = get_op_func(s);
			res = get_op(a, b);
			printf("%d\n", res);
			break;
		default:
			printf("Error\n");
			exit(99);
			break;
	}

	return (0);
}
