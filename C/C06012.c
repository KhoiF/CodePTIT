#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void solve()
{
	char c[500];
	scanf("%s",c);
	bool check=1;
	int d=strlen(c);
	for(int i=0; i<d/2; i++)
	{
		if (c[i] != '2' && c[i] != '3' && c[i] != '5' && c[i] != '7')
			check=0;
			break;
		if(c[i]!=c[d-1-i])
			check=0;
			break;
	}
	if(d%2==1 &&(c[d/2+1]!='2' && c[d/2+1]!='3' && c[d/2+1]!='5' && c[d/2+1]!='7'))
		check=0;
	if(check==0) printf("NO\n");
	else printf("YES\n");
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