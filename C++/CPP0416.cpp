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
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        int ans=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[i]+a[j]==k) ans++;
            }
        }
        cout << ans << endl;
    }
}