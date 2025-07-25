#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int s=0;
	for(int i=1; i<=n; i++)
	{
		if(i%2==1)
		{
			for(int j=1; j<=i; j++)
			{
				s++;
				printf("%d ", s);
			}
		}
		else
		{
			s+=i;
			for(int j=1; j<=i; j++)
			{
				printf("%d ", s);
				s--;
			}
			s+=i;
		}
		printf("\n");	
	}
}