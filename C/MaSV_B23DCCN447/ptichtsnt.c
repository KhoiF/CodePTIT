#include<stdio.h>
#include<math.h>
void pt()
{
	int n;
	scanf ("%d", &n);
	printf ("%d = ",n);
	int sqr=sqrt(n);
	for (int i=2; i<=sqr; i++)
	{
		int dem=0;
		if (n%i==0)
		{
			while (n%i==0)
			{
				dem++;
				n/=i;
			}
			printf ("%d^%d", i, dem);
		}
		if (dem!=0 && n!=1) printf (" * ");
	}
	if (n!=1) printf ("%d^1", n);
	printf ("\n");
}
int main()
{
	int T;
	scanf ("%d", &T);
	while (T--)
	{
		pt();
	}
}