#include <stdio.h>

void check_prime(int n, int original_n)
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
                    check_prime(n, original_n);
                    printf("I reached this line and current n value is %d\n",n);
                    break;
                };
            }
        }
        break;  
    }
    if (i >= n)
    {
        printf("%d is a prime factor of %d\n", n, original_n);
    }
}

int main(void)
{
    int n = 1231952;
    check_prime(n, n);
    return (0);
}
