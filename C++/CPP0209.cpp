#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,q;
    cin >> t;
    while(t--)
    {
        cin >> n >> q;
        int l,r;
        int a[n+1];
        a[0]=0;
        int tmp;
        for(int i=1; i<=n; i++)
        {
            cin >> tmp;
            a[i]=a[i-1]+tmp;
        }
        while(q--)
        {
            cin >> l >> r;
            cout << a[r]-a[l-1] << "\n";
        }
    }
}