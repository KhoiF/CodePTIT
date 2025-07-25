#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n],dp[n];
        fill(dp,dp+n,1);
        int ans=0;
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(a[j] < a[i]){
                    dp[i]=max(dp[i],dp[j]+1);
                    ans=max(ans,dp[i]);
                }
            }
        }
        cout << ans << endl;
    }   
}