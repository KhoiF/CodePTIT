#include<stdio.h>
#include<string.h>
int main()
{
	char c[255],x[255],s[100][100];
	gets(c);
	scanf("%s",&x);
	char *p;
	p=strtok(c," ");
	int id=0;
	while(p!=NULL)
	{
		if(strcmp(p,x)!=0)
		{
			strcpy(s[id],p);
			id++;
		}
		p=strtok(NULL," ");
	}
	for(int i=0; i<id; i++)
	{
		printf("%s ",s[i]);
	}
}