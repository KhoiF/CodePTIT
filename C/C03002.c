#include<stdio.h>
#include<math.h>
int snt(int a)
{
	int check=1;
	for (int i=2; i<=sqrt(a); i++)
	{
		if (a%i==0)
		{
			check=0;
			break;
		}
	}
	if (check==1) return 1; 
	else return 0;
}
int main()
{
	int n;
	scanf ("%d", &n);
	for (int i=2; i<=n; i++)
	{
		if (snt(i)==1) printf ("%d\n", i);
	}
}