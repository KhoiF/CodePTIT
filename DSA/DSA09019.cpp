#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
const int MOD = 1e9+7;
int n, m, parent[1005];
vector<int> ke[1005];
bool visited[1005];
bool DFS(int u){
    visited[u]=true;
    for(int v : ke[u]){
        if(!visited[v]){
            parent[v]=u;
            if(DFS(v))  return true;
        }
        else if(v!=parent[u])   return true;
    }
    return false;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> m;
        memset(parent, 0, sizeof parent);
        memset(visited, false, sizeof visited);
        for(int i=1; i<=n; i++) ke[i].clear();
        for(int i=1; i<=m; i++){
            int u, v;
            cin >> u >> v;
            ke[u].pb(v);
            ke[v].pb(u);
        }
        int ok=0;
        for(int i=1; i<=n; i++){
            if(!visited[i] && DFS(i)) ok=1;
            if(ok)  break;
        }
        if(ok)  cout << "YES\n";
        else cout << "NO\n";
    }
}