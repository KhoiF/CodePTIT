#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	for(int test=1; test<=t; test++)
	{
		char s1[200],s2[20],s3[20][50],s[20][50];
		gets(s1);
		gets(s2);
		char c[200];
		strcpy(c,s1);
		for(int i=0; i<strlen(c); i++)
		{
			c[i]=tolower(c[i]);
		}
		for(int i=0; i<strlen(s2); i++)
		{
			s2[i]=tolower(s2[i]);
		}
		char *token=strtok(c," ");
		int n=0,a[20]={0};
		while(token!=NULL)
		{
			strcpy(s3[n],token);
			++n;
			token=strtok(NULL," ");
		}
		for(int i=0; i<n; i++)
		{
			if(strcmp(s3[i],s2)==0) 
				a[i]=1;
		}
		int id=0;
		
		char *tok=strtok(s1, " ");
		printf("Test %d: ",test);
		while(tok!=NULL)
		{
			if(a[id]!=1) printf("%s ",tok);
			++id;
			tok=strtok(NULL, " ");
		}
		printf("\n");
	}
}