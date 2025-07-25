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
int n, c[5][10005], dp[(1<<4)][10005];
vector<int> valid;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    for(int i=0; i<(1<<4); i++){
        bool flag=1;
        for(int j=1; j<4; j++){
            if(bit(i, j) && bit(i, j-1)){
                flag=0;
            }
        }
        if(flag)    valid.pb(i);
    }
    int test = 1;
    cin >> test;
    while(test--){
        memset(dp, 0 ,sizeof dp);
        cin >> n;
        int ma=INT_MIN;
        for(int i=1; i<=4; i++){
            for(int j=1; j<=n; j++){
                cin >> c[i][j];
                ma=max(ma, c[i][j]);
            }
        }
        int ok=1;
        for(int i=1; i<=n; i++){
            for(int mask : valid){
                int s=0;
                for(int j=1; j<=4; j++){
                    if(bit(mask, j-1))  s+=c[j][i];
                }
                for(int premask:valid){
                    if((mask&premask) == 0){
                        if(dp[mask][i] < dp[premask][i-1] + s){
                            dp[mask][i]=dp[premask][i-1]+s;
                            ok=0;
                        }
                    }
                }
            }
        }
        if(ok)  cout << ma << "\n";
        else{
            int ans=INT_MIN;
            for(int mask : valid)   ans=max(ans, dp[mask][n]);
            cout << ans << "\n";
        }
    }
}