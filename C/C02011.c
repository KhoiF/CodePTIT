#include<stdio.h>
int main()
{
	int h,c;
	scanf ("%d %d", &h, &c);
	for (int i=1; i<=h; i++)
	{
		printf ("%d",i);
		int j=i+1;
		while (j<=c)
		{
			printf ("%d",j);
			j++;
		}
		if (i<=c)
		{
			int k=c-1;
			while (k>c-i) 
			{
				printf("%d",k);
				k--;
			}
		}
		else
		{
			int k=i-1;
			while (k>i-c) 
			{
				printf("%d",k);
				k--;
			}
		}
		printf ("\n");
	}
}