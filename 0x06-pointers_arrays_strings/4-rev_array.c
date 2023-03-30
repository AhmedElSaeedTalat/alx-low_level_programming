#include <stdio.h>
/**
  * reverse_array -  function that reverses arr of int
  *
  * @a: array of int
  *
  * @n: number of elements of the array
  */
void reverse_array(int *a, int n)
{
	int i, tmp;
	int *last = (&a[n - 1]);

	for (i = 0; i < n / 2; i++)
	{
		tmp = *a;
		*a = *last;
		*last = tmp;
		last--;
		a++;
	}
}
