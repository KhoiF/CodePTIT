#include<bits/stdc++.h>
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	double xa,ya,xb,yb;
	cin >> t;
	while(t--)
	{
		cin >> xa >> ya >> xb >> yb;
		double s;
		s=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
		printf("%.4lf\n",s);
	}		
}