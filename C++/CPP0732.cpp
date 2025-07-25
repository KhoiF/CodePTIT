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
        long long a[n],dp[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            dp[i]=a[i];
        }
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(a[i]>a[j])   dp[i]=max(dp[i],dp[j]+a[i]);
            }
        }
        long long ans=0;
        for(int i=0; i<n; i++)  ans=max(ans,dp[i]);
        cout << ans << endl;
    }
}