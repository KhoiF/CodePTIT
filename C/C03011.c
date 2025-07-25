#include<stdio.h>
#include<math.h>
int strong(int n)
{
	int S=0,n1=n;
	while (n1!=0)
	{
		int gt=1;
		for (int i=1; i<=n1%10; i++)
		{
			gt=gt*i;
		}
		S=S+gt;
		n1/=10;
	}
	if (S==n) return 1;
	else return 0;
}
int main()
{
	int a,b;
	scanf ("%d %d", &a, &b);
	int min,max;
	if (a>b) 
	{
		min=b; max=a;
	}
	else 
	{
		min=a; max=b;
	}
	for (int i=min; i<=max; i++)
	{
		if (strong(i)==1) printf ("%d ", i);
	}
}