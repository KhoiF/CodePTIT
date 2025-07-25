#include <stdio.h>
#include <math.h>
int check(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void solve()
{
    long long n;
    scanf("%lld", &n);
    int res;
    int x=sqrt(n);
    for (int i = 1; i <= x; i++)
    {
        if (n % i == 0)
        {
            if (check(n / i)==1)
            {
                printf("%lld\n", n / i);
                return;
            }
            if (check(i)==1)
                res = i;
        }
    }
    printf("%d\n", res);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}