#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("\n");
		char c[255];
		gets(c);
		int dem=0;
		char *p;
		p=strtok(c," ");
		while(p!=NULL)
		{
			dem++;
			p=strtok(NULL," ");
		}
		printf("%d\n",dem);
	}
}