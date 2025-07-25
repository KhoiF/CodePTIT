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
int n, m, s, pa[1005];
vector<int> ke[1005];
bool visited[1005];
void BFS(){
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(q.size()){
        int u = q.front();
        q.pop();
        for(int v : ke[u]){
            if(!visited[v]){
                pa[v]=u;
                visited[v]=true;
                q.push(v);
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(visited, false, sizeof visited);
        memset(pa, 0, sizeof pa);
        cin >> n >> m >> s;
        for(int i=1; i<=n; i++) ke[i].clear();
        for(int i=1; i<=m; i++){
            int x, y;
            cin >> x >> y;
            ke[x].pb(y);
            ke[y].pb(x);
        }
        BFS();
        for(int i=1; i<=n; i++){
            if(i==s)    continue;
            if(!visited[i]) cout << "No path\n";
            else{
                vector<int> res;
                for(int u=i; u!=0; u=pa[u]) res.pb(u);
                for(int j=res.size()-1; j>=0; j--)  cout << res[j] << " ";
                cout << "\n";
            }
        }
    }
}