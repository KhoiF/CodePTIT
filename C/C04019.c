#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n,m=1;
		scanf("%d", &n);
		int a[n],b[30001]={0};
		for(int i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
			b[a[i]]++;
			if(b[a[i]]>m) m=b[a[i]];
		}
		for(int i=0; i<n; i++)
		{
			if(b[a[i]]==m)
			{
				printf("%d ", a[i]);
				b[a[i]]=0;
			}
		}
		printf("\n");
	}
}