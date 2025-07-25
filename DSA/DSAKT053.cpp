#include<bits/stdc++.h>

using namespace std;
int t, dp[1005][1005];
string x, y;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> x >> y;
        int n=x.size(), m=y.size();
        x=" "+x;
        y=" "+y;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(x[i]==y[j])  dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
        cout << dp[n][m] << "\n";
    }
}