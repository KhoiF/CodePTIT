#include<stdio.h>
#include<math.h>
int shh(int n)
{
	int S=1;
	for (int i=2; i<=sqrt(n);i++)
	{
		if (n%i==0) S=S+i+n/i;
		if (n%i==0 && i*i==n) S=S-i;
	}
	if (S==n) return 1;
	else return 0;
}
int main()
{
	int n;
	scanf ("%d", &n);
	for (int i=2; i<=n; i++)
	{
		if (shh(i)==1) printf ("%d ",i);
	}
}