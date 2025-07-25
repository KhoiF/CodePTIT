#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	long long s=0;
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		s+=a[i];
	}
	printf("%.3f", 1.0*s/n);
}