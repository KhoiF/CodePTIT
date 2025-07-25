#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[50];
	gets(s);
	for(int i=0; i<strlen(s); i++)
	{
		s[i]=tolower(s[i]);
	}
	char c[20][20];
	char *token=strtok(s," ");
	int n=0;
	while(token!=NULL)
	{
		strcpy(c[n],token);
		++n;
		token=strtok(NULL," ");
	}
	for(int i=0; i<n-1; i++)
	{
		printf("%c",c[i][0]);
	}
	printf("%s",c[n-1]);
	printf("@ptit.edu.vn\n");
	
}