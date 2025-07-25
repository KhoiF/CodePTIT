#include<bits/stdc++.h>

using namespace std;
int t, n, a[1005], dp[1005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        fill(dp, dp+1001, 1);
        int lcs=0;
        for(int i=2; i<=n; i++){
            for(int j=1; j<i; j++){
                if(a[j]<=a[i])   dp[i]=max(dp[i], dp[j]+1);
            }
            lcs=max(lcs, dp[i]);
        }
        cout << n-lcs << "\n";
    }
}