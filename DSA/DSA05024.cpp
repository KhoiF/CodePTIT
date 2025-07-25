#include<bits/stdc++.h>

using namespace std;
#define maxn 1005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int n, k, a[maxn];
ll dp[maxn];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(dp, 0, sizeof dp);
        cin >> n >> k;
        dp[0]=1;
        for(int i=1; i<=n; i++) cin >> a[i];
        for(int i=1; i<=k; i++){
            for(int j=1; j<=n; j++){
                if(i>=a[j]) (dp[i]+=dp[i-a[j]])%=MOD;
            }
        }
        cout << dp[k] << "\n";
    }
}