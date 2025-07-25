#include<stdio.h>
#include<math.h>
int snt(int a)
{
	int dem=0;
	for (int i=2; i<sqrt(a);i++)
	{
		if (a%i==0) dem++;
	}
	if (dem==0) return 1;
	else return 0;
}
int main()
{
	int T;
	scanf ("%d", &T);
	while (T--)
    {
    	int n;
    	scanf ("%d", &n);
    	if (snt(n)==1) printf ("YES\n");
    	else printf ("NO\n");
	}
}