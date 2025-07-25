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
int n, k, a[105], x[105], ans;
void Try(int i){
    if(i>k){
        bool ok=true;
        for(int j=2; j<=k; j++){
            if(a[x[j]]<a[x[j-1]]){
                ok=false;
                break;
            }
        }
        if(ok)  ans++;
        return;
    }
    for(int j=x[i-1]+1; j<=n-k+i; j++){
        x[i]=j;
        Try(i+1);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    //cin >> test;
    while(test--){
        cin >> n >> k;
        for(int i=1; i<=n; i++) cin >> a[i];
        Try(1);
        cout << ans;
    }
}