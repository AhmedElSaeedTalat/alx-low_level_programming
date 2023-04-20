#include <stdio.h>
#include <stdlib.h>
/**
  * op_add - add a and b
  *
  * @a: first int
  *
  * @b: second int
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - sub a & b
  *
  * @a: first int
  *
  * @b: second int
  *
  * Return: sub
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - mul a & b
  *
  * @a: first int
  *
  * @b: second int
  *
  * Return: mul
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - div a & b
  *
  * @a: first int
  *
  * @b: second int
  *
  * Return: div
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  * op_mod - mod a & b
  *
  * @a: first int
  *
  * @b: second int
  *
  * Return: mod
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
