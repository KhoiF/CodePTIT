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
		int l=strlen(s),chan=0,le=0,check=1;
		for(int i=0; i<l; i++)
		{
			if(s[i]>'9' || s[i]<'0')
			{
				check=0;
				break;
			}
			if(s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9')
				le++;
			else 
				chan++;
		}
		if(check==0)
		{
			printf("INVALID\n");
			continue;
		}
		if((l%2==1 && le>chan) || (l%2==0 && chan>le))
			printf("YES\n");
		else 
			printf("NO\n");
	}
}