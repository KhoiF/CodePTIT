#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	char s='a'-1;
	for(int i=1; i<=n; i++)
	{
		if(i%2==1)
		{
			for(int j=1; j<=i; j++)
			{
				s++;
				printf("%c ", s);
			}
		}
		else
		{
			s+=i;
			for(int j=1; j<=i; j++)
			{
				printf("%c ", s);
				s--;
			}
			s+=i;
		}
		printf("\n");	
	}
}