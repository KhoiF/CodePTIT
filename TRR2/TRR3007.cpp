#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<int, pair<int, int>>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int n, u, x[1005], a[1005][1005], cnt;
vector<int> ke[1005], res[10005];
bool visited[1005];
void Hamilton(int m){
    for(int v : ke[x[m-1]]){
        if(m==n+1 && v==u){
            cnt++;
            for(int i=1; i<=n; i++) res[cnt].pb(x[i]);
            res[cnt].pb(u);
            return;
        }
        else if(!visited[v]){
            x[m]=v;
            visited[v]=1;
            Hamilton(m+1);
            visited[v]=0;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("CT.INP", "r", stdin);
    freopen("CT.OUT", "w", stdout);
    cin >> n >> u;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]) ke[i].pb(j);
        }
    }
    x[1]=u;
    visited[u]=1;
    Hamilton(2);
    for(int i=1; i<=cnt; i++){
        for(int v : res[i]) cout << v << " ";
        cout << "\n";
    }
    cout << cnt;
}