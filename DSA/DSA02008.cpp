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
int n, m, a[15][15], c[15], cnt, x[15];
vector<int> res[10005];
void Try(int i){
    if(i>n){
        int sum=0;
        for(int k=1; k<=n; k++)  sum+=a[k][x[k]];
        if(sum==m){
            cnt++;
            for(int k=1; k<=n; k++) res[cnt].pb(x[k]);
        }
        return;
    }
    for(int k=1; k<=n; k++){
        if(!c[k]){
            x[i]=k;
            c[k]=1;
            Try(i+1);
            c[k]=0;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin >> test;
    while(test--){
        cin >> n >> m;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++) cin >> a[i][j];
        }
        Try(1);
        cout << cnt << "\n";
        for(int i=1; i<=cnt; i++){
            for(int x : res[i]) cout << x << " ";
            cout << "\n";
        }
    }
}