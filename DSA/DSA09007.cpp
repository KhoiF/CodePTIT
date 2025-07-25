#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
const int MOD = 1e9+7;
int n, m, s, t;
bool visited[1005];
vector<int> ke[1005];
void BFS(){
    queue<int> q;
    int parent[1005];
    q.push(s);
    visited[s]=true;
    parent[s]=0;
    while(q.size()){
        int u=q.front();
        if(u==t)    break;
        q.pop();
        for(int v : ke[u]){
            if(!visited[v]){
                q.push(v);
                visited[v]=true;
                parent[v]=u;
            }
        }
    }
    if(!visited[t]){
        cout << -1 << "\n";
        return;
    }
    vector<int> ans;
    for(int i=t; i; i=parent[i])    ans.pb(i);
    for(int i=ans.size()-1; i>=0; i--)  cout << ans[i] << " ";
    cout << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> m >> s >> t;
        for(int i=1; i<=n; i++) ke[i].clear();
        memset(visited, false, sizeof visited);
        for(int i=1; i<=m; i++){
            int u, v;
            cin >> u >> v;
            ke[u].pb(v);
            ke[v].pb(u);
        }
        BFS();
    }
}