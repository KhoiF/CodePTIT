#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		int c='@';
		for(int j=1;j<=2*i-1; j++)
		{
			if(j==1 || j==2*i-1)
				printf("@");
			else if(j<=i)
			{
				c+=2;
				printf("%c", c);
			}
			else if(j>i)
			{
				c-=2;
				printf("%c", c);
			}
		}
		printf("\n");
	}
}