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
int t, n, m, s, pa[105];
vector<int> ke[105];
bool visited[105];
vector<ii> res;
void DFS(int u){
    visited[u]=true;
    for(int v : ke[u]){
        if(!visited[v]){
            res.pb({v, u});
            DFS(v);
        }
    }
}
void BFS(int s){
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(q.size()){
        int u=q.front();
        q.pop();
        for(int v : ke[u]){
            if(!visited[v]){
                visited[v]=true;
                res.pb({v, u});
                q.push(v);
            }
        }
    }
    if(res.size()!=n-1)   cout << "0\n";
    else{
        cout << n-1 <<  "\n";
        for(ii x : res) cout << x.first << " " << x.second << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    //cin >> test;
    while(test--){
        cin >> t >> n >> m >> s;
        for(int i=1; i<=m; i++){
            int x, y;
            cin >> x >> y;
            ke[x].pb(y);
            ke[y].pb(x);
        }
        if(t==1){
            DFS(s);
            if(res.size()!=n-1)   cout << "0\n";
            else{
                cout << n-1 << endl;
                for(ii x : res) cout << x.first << " " << x.second << endlendl;
            }
        }
        else{
            BFS(s);
        }
    }
}