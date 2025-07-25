#include<stdio.h>
int main()
{
	int T;
	scanf ("%d", &T);
	while (T--)
	{
		int check=1;
		long long n;
		scanf ("%lld", &n);
		while (n!=0)
		{
			int truoc,sau;
			sau=n%10;
			truoc=(n%100)/10;
			if (sau<truoc)
			{
				check=0;
				break;
			}
			else n/=10;
		}
		if (check==1) printf ("YES\n");
		else printf ("NO\n");
	}
}