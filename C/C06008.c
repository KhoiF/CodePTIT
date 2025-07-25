#include<stdio.h>
#include<string.h>
int main()
{
	char c[101],s[100][100];
	gets(c);
	char *p=strtok(c," ");
	int n=0;
	while(p!=NULL)
	{
		int check=1;
		for(int i=0; i<n; i++)
		{
			if(strcmp(s[i],p)==0)
				check=0;
		}
		if(check==1)
		{
			strcpy(s[n],p);
			n++;
		}
		p=strtok(NULL," ");
	}
	for(int i=0; i<n; i++)
	{
		printf("%s ",s[i]);
	}
}