#include<bits/stdc++.h>

using namespace std;
int test, v, e, u, s, t;
vector<int> adj[1005];
bool visited[1005];
void DFS(int u){
    cout << u << " ";
    visited[u]=true;
    for(int v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> test;
    while(test--){
        cin >> v >> e >> u;
        for(int i=1; i<=v; i++) adj[i].clear();
        memset(visited, 0, sizeof visited);
        for(int i=0; i<e; i++){
            cin >> s >> t;
            adj[s].push_back(t);
            adj[t].push_back(s);
        }
        DFS(u);
        cout << "\n";
    }
}