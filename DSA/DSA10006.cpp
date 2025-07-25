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
int n, m, k, goal, pa[1005], cnt;
bool visited[1005];
vector<int> ke[1005];
ii res[1005];
void DFS(int u){
    visited[u]=true;
    for(int v : ke[u]){
        if(!visited[v]){
            cnt++;
            res[cnt]={u, v};
            DFS(v);
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cnt=0;
        memset(visited, false, sizeof visited);
        memset(pa, 0, sizeof pa);
        cin >> n >> m >> k;
        for(int i=1; i<=n; i++) ke[i].clear();
        for(int i=1; i<=m; i++){
            int x, y;
            cin >> x >> y;
            ke[x].pb(y);
            ke[y].pb(x);
        }
        DFS(k);
        if(cnt==n-1){
            for(int i=1; i<=n-1; i++)  cout << res[i].first << " " << res[i].second << "\n";
        }
        else cout << "-1\n";
    }
}   