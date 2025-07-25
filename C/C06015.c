#include<stdio.h>
#include<string.h>
#include<ctype.h>
void chuanhoa(char c[])
{
	c[0]=toupper(c[0]);
	for(int i=1; i<strlen(c); i++)
	{
		c[i]=tolower(c[i]);
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char c[50];
		char s[20][20];
		int n=0;
		gets(c);
		char *token=strtok(c," ");
		while(token!=NULL)
		{
			strcpy(s[n],token);
			++n;
			token=strtok(NULL," ");
		}
		for(int i=1; i<n; i++)
		{
			chuanhoa(s[i]);
			printf("%s",s[i]);
			if(i!=n-1) printf(" ");
			else printf(", ");
		}
		for(int i=0; i<strlen(s[0]); i++)
		{
			s[0][i]=toupper(s[0][i]);
		}
		printf("%s\n",s[0]);
	}
}