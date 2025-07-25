#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int m=n-1;
	for(int i=1; i<=n; i++)
	{
		for(int k=1; k<=m; k++)
			printf("~");
		m--;	
		for(int j=1; j<=2*i-1; j+=2)
			printf("%d", j);
		for(int j=2*i-3; j>0; j-=2)
			printf("%d", j);
		printf("\n");
	}
}