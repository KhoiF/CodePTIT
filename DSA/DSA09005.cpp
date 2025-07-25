#include<bits/stdc++.h>

using namespace std;
vector<int> ke[1005];
int visited[1005];
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u]=1;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        cout << x << " ";
        for(int y : ke[x]){
            if(!visited[y]){
                q.push(y);
                visited[y]=1;
            }
        } 
    }
    
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, v, e, u;
    cin >> t;
    while(t--){
        memset(visited, 0, sizeof visited);
        cin >> v >> e >> u;
        for(int i=1; i<=v; i++) ke[i].clear();
        int s, t;
        for(int i=0; i<e; i++){
            cin >> s >> t;
            ke[s].push_back(t);
            ke[t].push_back(s);
        }
        BFS(u);
        cout << "\n";
    }
}