#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int n, m, a[505][505], dp[505][505];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(dp, 0, sizeof dp);
        cin >> n >> m;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> a[i][j];
                dp[i][j]=a[i][j];
            }
        }
        int ans=0;
        for(int i=2; i<=n; i++){
            for(int j=2; j<=m; j++){
                if(a[i][j]){
                    dp[i][j]=min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]})+1;
                }
                ans=max(ans, dp[i][j]);
            }
        }
        cout << ans << "\n";
    }
}