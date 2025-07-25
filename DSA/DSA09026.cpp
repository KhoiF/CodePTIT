#include<bits/stdc++.h>

using namespace std;
int t, v, e, x, y, st, en;
vector<int> ke[1005];
int parent[1005];
bool visited[1005];
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u]=true;
    int tmp;
    while(q.size()){
        if(visited[en]) return;
        tmp=q.front();
        q.pop();
        for(int i : ke[tmp]){
            if(!visited[i]){
                parent[i]=tmp;
                q.push(i);
                visited[i]=true;
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> v >> e >> st >> en;
        for(int i=1; i<=v; i++) ke[i].clear();
        memset(visited, 0, sizeof visited);
        memset(parent, 0, sizeof parent);
        for(int i=1; i<=e; i++){
            cin >> x >> y;
            ke[x].push_back(y);
        }
        BFS(st);
        if(visited[en]){
            vector<int> res;
            for(int i=en; i!=0; i=parent[i])    res.push_back(i);
            for(int i=res.size()-1; i>=0; i--)  cout << res[i] << " ";
            cout << "\n";
        }
        else cout << -1 << "\n";
    }
}