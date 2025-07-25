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
int n, s, a[50], ans;
void Try(int i, int cnt, int sum){
    if(sum==s){
        ans=min(ans, cnt);
        return;
    }
    for(int k=i; k<=n; k++){
        if(sum+a[k]<=s) Try(k+1, cnt+1, sum+a[k]);
    }

}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> s;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a+1, a+1+n, greater<int>());
        ans=50;
        Try(1, 0, 0);
        if(ans!=50) cout << ans << "\n";
        else cout << "-1\n";
    }
}