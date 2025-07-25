#include<bits/stdc++.h>

using namespace std;
const int MOD = 1e9+7;
int t, n, k, dp[1000005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        memset(dp, 0, sizeof dp);
        cin >> n >> k;
        dp[0]=1;
        for(int i=1; i<=k; i++){
            for(int j=1; j<=i; j++) (dp[i]+=dp[i-j])%=MOD;
        }
        for(int i=k+1; i<=n; i++){
            for(int j=1; j<=k; j++) (dp[i]+=dp[i-j])%=MOD;
        }
        cout << dp[n] << "\n";
    }
}