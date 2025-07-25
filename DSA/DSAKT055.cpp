#include<bits/stdc++.h>

using namespace std;
int a[1005], c[1005], dp[1005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, v;
    cin >> t;
    while(t--){
        memset(dp, 0, sizeof dp);
        cin >> n >> v;
        for(int i=1; i<=n; i++) cin >> a[i];
        for(int i=1; i<=n; i++) cin >> c[i];
        int res=0;
        for(int i=1; i<=n; i++){
            for(int j=v; j>=a[i]; j--){
                dp[j]=max(dp[j], dp[j-a[i]]+c[i]);
                res=max(res, dp[j]);
            }
        }
        cout << res << "\n";
    }
}