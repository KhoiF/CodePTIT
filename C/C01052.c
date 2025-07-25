#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	scanf ("%d", &T);
	while (T--)
	{
		int n,dem=0;
		scanf ("%d", &n);
		for (int i=1; i<=sqrt(n); i++)
		{
			 if (n % i == 0)
            {
                if (i % 2 == 0)
                    dem++;
                if ((n / i) % 2 == 0)
                    dem++;
                if (i * i == n && i % 2 == 0)
                    dem = dem - 1;
            }
		}
		printf ("%d\n", dem);
	}
}