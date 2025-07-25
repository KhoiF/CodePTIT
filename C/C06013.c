#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[1001];
		gets(s);
		if(s[0]=='0')
		{
			printf("INVALID\n");
			continue;
		}
		int a[10]={0};
		int check=1,l=strlen(s);
		for(int i=0; i<l; i++)
		{
			if(s[i]<'0' || s[i]>'9')
			{
				check=0;
				break;
			}
			else
			{
				int id=s[i]-'0';
				a[id]++;
			}
		}
		if(check==0)
		{
	 		printf("INVALID\n");
			continue;
		}
		for(int i=0; i<10; i++)
		{
			if(a[i]==0)
			{
				check=0;
				break;
			}
		}
		if(check==1) printf("YES\n");
		else printf("NO\n");
	}
}