#include<bits/stdc++.h>

using namespace std;
int t, v, e, u, x, y;
vector<int> ke[1005];
bool visited[1005];
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u]=true;
    while(q.size()){
        int tmp=q.front();
        cout << tmp << " ";
        q.pop();
        for(int v : ke[tmp]){
            if(!visited[v]){
                q.push(v);
                visited[v]=true;
            }
        }
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
        BFS(u);
        cout << "\n";
    }
}