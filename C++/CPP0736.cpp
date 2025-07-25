#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,n,x;
	cin>>t;
	while(t--)
    {
        cin >> n >> x;
        int a[n+1];
        a[0]=0;
        for(int i=1;i<=n;i++) 
        {
            cin>>a[i];
            a[i] += a[i-1];
        }
        int res = n+1;
        for(int i=1;i<=n;i++)
        {
            auto pos = upper_bound(a, a+i, a[i]-x);
            int vt = pos - (a+1);
            if(a[i]-a[vt]==x) vt--;
            if(vt<0) continue;
            res = min(i-vt, res);
        }
        if(res==n+1) res=-1;
        cout<<res<<endl;
    }
}
