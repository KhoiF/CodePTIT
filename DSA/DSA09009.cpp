#include<bits/stdc++.h>

using namespace std;
int t, v, e, x, y, tplt;
vector<int> ke[1005];
bool visited[1005];
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u]=true;
    int tmp;
    while(q.size()){
        tmp=q.front();
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
        cin >> v >> e;
        for(int i=1; i<=v; i++) ke[i].clear();
        memset(visited, 0, sizeof visited);
        for(int i=0; i<e; i++){
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        tplt=0;
        for(int i=1; i<=v; i++){
            if(!visited[i]){
                tplt++;
                BFS(i);
            }
        }
        cout << tplt << "\n";
    }
}