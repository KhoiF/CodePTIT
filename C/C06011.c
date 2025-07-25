#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void solve()
{
	char c[501],s[501];
	scanf("%s",&c);
	bool check=1;
	int d=strlen(c),T=0;
	char b=c[0],e=c[d-1];
	for(int i=0; i<d/2; i++)
	{
		if(c[i]!=c[d-1-i])
			check=0;
		T+=(c[i]-'0'+c[d-i-1]-'0');
	}
	if(check==0) printf("NO\n");
	else
	{
		if(T%10==0 && b=='8' && e=='8')
			printf("YES\n");
		else printf("NO\n");
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
}