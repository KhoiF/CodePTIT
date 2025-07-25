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
int n, c[20][20], dp[1<<15][20];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n;
        memset(dp, 0 ,sizeof dp);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++) cin >> c[i][j];
        }
        for(int mask=3; mask<(1<<n); mask++){
            for(int i=0; i<n; i++){
                if(bit(mask, i)){
                    int premask=mask^(1<<i);
                    for(int j=0; j<n; j++){
                        if(bit(premask, j)){
                            if(dp[mask][i]) dp[mask][i]=min(dp[mask][i], dp[premask][j]+c[j][i]);
                            else dp[mask][i]=dp[premask][j] + c[j][i];
                        }
                    }
                }
            }
        }
        int ans=INT_MAX;
        for(int i=0; i<n; i++)  ans=min(ans, dp[(1<<n)-1][i]);
        cout << ans << "\n";
    }
}