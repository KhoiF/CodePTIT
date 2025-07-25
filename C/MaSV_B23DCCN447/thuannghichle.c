#include<stdio.h>
int check(long long n)
{
	long long tmg=n,s=0;
	int tongcs=0;
	while (tmg!=0)
	{
		if ((tmg%10)%2==0) 
		{
			return 0;
			break;
		}
		tongcs+=tmg%10;
		s=s*10+tmg%10;
		tmg/=10;
	}
	if (s==n && tongcs%2==1) return 1;
	else return 0;
}
void solve()
{
	long long n;
	scanf ("%ld", &n);
	if (check(n)==1) printf ("YES\n");
	else printf ("NO\n");
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
