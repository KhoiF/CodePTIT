#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, v;
    cin >> t;
    while(t--){
        cin >> n >> v;
        int w[n+5], c[n+5];
        for(int i=1; i<=n; i++) cin >> w[i];
        for(int i=1; i<=n; i++) cin >> c[i];
        long long dp[100005]={0};
        for(int i=1; i<=n; i++){
            for(int j=v; j>=1; j--){
                if(j>=w[i])    dp[j]=max(dp[j], dp[j-w[i]]+1ll*c[i]);
            }
        }
        long long res=0;
        for(int i=1; i<=v; i++) res=max(res, dp[i]);
        cout << res << "\n";
    }
}   