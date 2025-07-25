#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a,a+n);
        int ans=INT_MAX;
        for(int i=0; i<n-1; i++)
        {
            ans=min(ans,a[i+1]-a[i]);
        }
        cout << ans << endl;
    }
}