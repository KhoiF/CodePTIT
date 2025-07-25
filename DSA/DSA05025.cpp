#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long dp[51]={0};
        dp[0]=1;
        for(int i=1; i<=3; i++){
            for(int j=1; j<=i; j++) dp[i]+=dp[i-j];
        }
        for(int i=4; i<=n; i++){
            for(int j=1; j<=3; j++) dp[i]+=dp[i-j];   
        }
        cout << dp[n] << "\n";
    }
}