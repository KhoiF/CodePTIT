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
int n, s, a[50], ans=100, x[50];
void Try(int i, int cnt, int sum){
    if(sum==s){
        ans=min(ans, cnt);
        return;
    }
    if(i>n) return;
    for(int k=x[i-1]+1; k<=n; k++){
        x[i]=k;
        if(sum+a[x[i]]<=s) Try(i+1, cnt+1, sum+a[x[i]]);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    //cin >> test;
    while(test--){
        cin >> n >> s;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a+1, a+1+n, greater<int>());
        Try(1, 0, 0);
        if(ans!=100)    cout << ans;
        else cout << -1;
    }
}