#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
  * get_op_func - correct function to perform
  *
  * @s: operator received
  *
  * Return: pointer to function
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (ops[i].op[0] == *s)
			return (ops[i].f);
		else if (s == NULL)
			return (NULL);
		i++;
	}

	return (NULL);
}

