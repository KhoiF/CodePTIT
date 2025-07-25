#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int x=2*n-3;
	for(int i=n; i>0; i--)
	{
		for(int j=n; j>=i; j--)
			printf("%d", j);
		for(int k=1; k<=x; k++)
			printf("%d", i);
		x-=2;
		for(int j=i; j<=n; j++)
		{
			if(j!=1) printf("%d", j);
		}	
		printf("\n");
	}
	x=1;
	for(int i=2; i<=n; i++)
	{
		for(int j=n; j>=i; j--)
			printf("%d",j);
		for(int k=1; k<=x;k++)
			printf("%d", i);
		x+=2;
		for(int j=i; j<=n; j++)
			printf("%d", j);
		printf("\n");		
	}
}