#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int a[n],b[m];
        int maxn=INT_MIN,mint=INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            maxn=max(maxn,a[i]);
        }
        for(int i=0; i<m; i++)
        {
            cin >> b[i];
            mint=min(mint,b[i]);
        }
        long long s=1ll*maxn*mint;
        cout << s << endl;
    }
}