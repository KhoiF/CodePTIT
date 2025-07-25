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
int k, n, m, a[105], d[1005];
bool visited[1005];
vector<int> ke[1005];
void DFS(int u){
    visited[u]=true;
    d[u]++;
    for(int v : ke[u]){
        if(!visited[v]) DFS(v);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin >> test;
    while(test--){
        cin >> k >> n >> m;
        for(int i=1; i<=k; i++) cin >> a[i];
        for(int i=1; i<=m; i++){
            int x, y;
            cin >> x >> y;
            ke[x].pb(y);
        }
        for(int i=1; i<=k; i++){
            memset(visited, false, sizeof visited);
            DFS(a[i]);
        }
        int ans=0;
        for(int i=1; i<=n; i++) ans+=(d[i]==k);
        cout << ans;
    }
}