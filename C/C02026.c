#include<stdio.h>
int main()
{
	int h,c;
	scanf("%d%d", &h, &c);
	for(int i=h; i>0; i--)
	{
		if(i>c)
		{
			for(int j=1; j<=c; j++)
				printf("%c", '@'+c);
			printf("\n");
		}
		else
		{
			for(int j=i; j<=c; j++)
				printf("%c", '@'+j);
			for(int k=i-1; k>0; k--)
				printf("%c", '@'+c);
			printf("\n");	
		}
	}
}