#include<stdio.h>
int gt(int x)
{
	if(x==1 || x==0) return 1;
	return gt(x-1)*x;
}
int main()
{
	int n;
	scanf ("%d", &n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			int tmp;
			tmp=gt(i)/(gt(j)*gt(i-j));
			printf("%d ",tmp);
		}
		printf("\n");
	}
}