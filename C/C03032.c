#include<stdio.h>
#include<math.h>
int snt(int n)
{
	int sqr=sqrt(n);
	for(int i=2; i<=sqr; i++)
		if (n%i==0) 
		{
			return 0;
			break;
		}
	return 1;
}
int cs(int n)
{
	while (n!=0)
	{
		if (n%10==0 || n%10==1 || n%10==4 || n%10==6 || n%10==8 || n%10==9)
		{
			return 0;
			break;
		}
		n/=10;
	}
	return 1;
}
void solve()
{
	int a,b,dem=0;
	scanf ("%d %d", &a, &b);
	for (int i=a; i<=b; i++)
	{
		if (snt(i)==1 && cs(i)==1) dem++;
	}
	printf ("%d\n", dem);
}
int main()
{
	int T;
	scanf ("%d", &T);
	while (T--)
	{
		solve();
	}
}