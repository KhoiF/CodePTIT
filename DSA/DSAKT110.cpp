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
int n, a[maxn];
ll dp[maxn];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n;
        memset(dp, 0, sizeof dp);
        for(int i=1; i<=n; i++) cin >> a[i];
        dp[1]=1ll*a[1];
        for(int i=2; i<=n; i++){
            dp[i]=max(dp[i-1], dp[i-2]+1ll*a[i]);
        }
        cout << dp[n] << "\n";
    }
}