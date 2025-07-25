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
		char s[80];
		char c[20][50];
		int n=0;
		gets(s);
		char *token=strtok(s,",");
		while(token!=NULL)
		{
			strcpy(c[n],token);
			++n;
			token=strtok(NULL," ");
		}
		for(int i=0; i<n; i++)
		{
			chuanhoa(c[i]);
			printf("%s ",c[i]);
		}
		printf("\n");
	}
}