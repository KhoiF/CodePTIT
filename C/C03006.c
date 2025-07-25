#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	scanf ("%d", &T);
	for (int i=1; i<=T; i++)
	{
		int n;
		scanf ("%d", &n);
		printf ("Test %d:", i);
		for (int i=2; i<=n; i++)
        {
			int dem=0;
			while (n%i==0)
			{
				dem++;
				n/=i;
			}
			if (dem!=0) 
			{
			    printf (" %d", i);
			    printf ("(%d) ", dem);
            }
		}
		printf ("\n");
	}
}