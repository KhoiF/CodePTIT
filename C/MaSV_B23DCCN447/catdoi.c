#include<stdio.h>
#include<string.h>
int cut(char c)
{
	if(c=='0' || c=='9' || c=='8' ) return 0;
	else if(c=='1') return 1;
	else return -1;
}
void solve()
{
	char s[19];
	scanf ("%s", s);
	long long x=0;
	for (int i=0; i<strlen(s); i++)
	{
		int tmp=cut(s[i]);
		if (tmp==-1)
		{
			printf ("INVALID\n");
			return;
		}
		x=x*10+tmp;
	}
	if (x==0) printf ("INVALID\n");
	else printf ("%lld\n", x);
}
int main()
{
	int t;
	scanf ("%d", &t);
	while(t--)
	{
		solve();
	}
}