#include<stdio.h>
#include<math.h>
int main()
{
	int n,k,count=0;
	scanf ("%d %d", &n, &k);
	for (int i=1; i<=n; i++) 
	{
		if (i%2==0)
		{
			int j=i;
			while (j%2==0)
			{
				count++;
				j/=2;
			}
		}
	}
	if (count>=k) printf ("Yes");
	else printf ("No");
}