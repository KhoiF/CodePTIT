#include<bits/stdc++.h>

using namespace std;
int dp[105][105][105];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, m, p;
    string x, y, z;
    cin >> t;
    while(t--){
        memset(dp, 0, sizeof dp);
        cin >> n >> m >> p;
        cin >> x >> y >> z;
        x=" "+x; y=" "+y; z=" "+z;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                for(int k=1; k<=p; k++){
                    if(x[i]==y[j] && y[j]==z[k])    dp[i][j][k]=dp[i-1][j-1][k-1]+1;
                    else dp[i][j][k]=max({dp[i-1][j][k], dp[i][j-1][k], dp[i][j][k-1]});
                }
            }
        }
        cout << dp[n][m][p] << "\n";
    }
}