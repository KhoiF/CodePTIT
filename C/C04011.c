#include<stdio.h>
int main()
{
	int t;
	scanf ("%d", &t);
	while(t--)
	{
		int n;
		scanf ("%d", &n);
		int a[n];
		for (int i=0; i<n; i++)
		{
			scanf ("%d", &a[i]);
		}
		int dem=1;
		for (int i=1; i<n; i++)
		{
			int check=0;
			for (int j=0; j<i; j++)
				if(a[i]>=a[j]) check++;
			if(check == i) dem++;	
		}
		printf ("%d\n", dem);
	}
}