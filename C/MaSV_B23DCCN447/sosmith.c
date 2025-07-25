#include <stdio.h>
#include<math.h>
long long sumCS(long long n)
{
    long long sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

long long sumNT(long long n)
{
    long long sum = 0;
    long long x=sqrt(n);
    for (long long i = 2; i <= x; i++)
    {
        while (n % i == 0)
        {
            sum += sumCS(i);
            n /= i;
        }
    }
    if (n == 1)
        return sum;
    return sum + sumCS(n);
}

int main()
{
    long long n;
    scanf("%lld", &n);
    if (sumCS(n) == sumNT(n))
        printf("YES");
    else
        printf("NO");
    return 0;
}