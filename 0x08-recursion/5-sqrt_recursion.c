#include <stdio.h>
/**
  * _sqrt_recursion - natural square root of a number
  *
  * @n: int received to return square root
  *
  * Return: square root
  */
int _sqrt_recursion(int n)
{

	int square, val;

	val = 0;

	if (square != val)
	{
		return (square);
	}
	
		val  = square;
		
		square = (square + n/ square) / 2;

	 return _sqrt_recursion(n);
}
int main(void)
{
    int r;

    //r = _sqrt_recursion(1);
    //printf("%d\n", r);
    //r = _sqrt_recursion(1024);
    //printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    //r = _sqrt_recursion(17);
    //printf("%d\n", r);
    //r = _sqrt_recursion(25);
    //printf("%d\n", r);
    //r = _sqrt_recursion(-1);
    //printf("%d\n", r);
    return (0);
}

