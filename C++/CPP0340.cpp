#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, m;
    long long dp[105][105];
    string s;
    cin >> t;
    while(t--){
        memset(dp, 0, sizeof(dp));
        cin >> m >> n;
        cin >> s;
        dp[0][(s[0]-'0')%n]++;
        for(int i=1; i<m; i++){
            dp[i][(s[i]-'0')%n]++;
            for(int j=0; j<n; j++){
                dp[i][j]+=dp[i-1][j];
                dp[i][(j*10+(s[i]-'0'))%n]+=dp[i-1][j];
            }
        }
        cout << dp[m-1][0] << endl;
    }
    
}