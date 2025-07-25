#include<bits/stdc++.h>

using namespace std;
int t, v, e, u, x, y;
vector<int> ke[1005];
bool visited[1005];
void DFS(int u){
    cout << u << " ";
    visited[u]=true;
    for(int v : ke[u]){
        if(!visited[v]) DFS(v);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> v >> e >> u;
        for(int i=1; i<=v; i++) ke[i].clear();
        memset(visited, 0, sizeof visited);
        for(int i=1; i<=e; i++){
            cin >> x >> y;
            ke[x].push_back(y);
        }
        DFS(u);
        cout << "\n";
    }
}