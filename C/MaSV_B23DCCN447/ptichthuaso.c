#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	scanf ("%d", &T);
	while(T--)
	{
		int n;
		scanf ("%d", &n);
		int sqr=sqrt(n);
		for (int i=2; i<=sqr; i++)
		{
			while(n%i==0)
			{
				printf ("%d ", i);
				n/=i;
			}
		}
		if (n>1) printf ("%d", n);
		printf ("\n");
	}
}