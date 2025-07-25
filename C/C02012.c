#include<stdio.h>
int main()
{
	int h,c;
	scanf ("%d %d", &h, &c);
	for (int i=1; i<=h; i++)
	{
		printf ("%d",i);
		if (i<=c)
		{
		    int k=i-1;
		    while (k>0)
		    {
		    	printf ("%d", k);
	    		k--;
		    }
		}
		else
		{
			int k=i-1;
			while (k>i-c)
			{
				printf ("%d", k);
				k--;
			}
		}
		for (int j=2; j<=c-i+1; j++) printf ("%d",j);	
		printf ("\n");
	}
}