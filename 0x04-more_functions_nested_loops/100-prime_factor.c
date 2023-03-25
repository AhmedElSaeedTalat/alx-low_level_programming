#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
void check_prime(int n)
{
	int i, y, count, res;

	count = 0;
	res = 1;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			for (y = 1; y < n; y++)
			{
				n = n / i;
				count++;
				if (n % i != 0)
				{
					printf("last divided: %d\n",n);
					printf("count: %d\n",count);
					printf("div on: %d\n",i);
					for (int z = 0; z < count; z++)
					{
						res = res * i;

					};
					res = res * n;
					printf("res: %d\n",res);
					check_prime(n);
					printf("I reached this line and current n value is %d\n",n);
					break;
				};
			}
			
		}
		break;	
	}

			
}

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n = 1231952;
	
	check_prime(n);
	return (0);
}
