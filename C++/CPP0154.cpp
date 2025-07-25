#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int a[n+1];
        a[0]=0;
        for(int i=1; i<=n; i++)
        {
            a[i]=i;
            a[i]+=a[i-1];
        }
        int x=n/k;
        if(a[n]-x*k==k) cout << 1 << endl;
        else cout << 0 << endl;
    }
}