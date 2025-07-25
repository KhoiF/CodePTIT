#include<bits/stdc++.h>

using namespace std;
int dp[1001][1001];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        memset(dp, 0, sizeof dp);
        string s1, s2;
        cin >> s1 >> s2;
        int n=s1.size(), m=s2.size();
        s1=" "+s1; s2=" "+s2;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(s1[i]==s2[j])  dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=max(dp[i][j-1], dp[i-1][j]);
            }
        }
        cout << dp[n][m] << "\n";
    }
}