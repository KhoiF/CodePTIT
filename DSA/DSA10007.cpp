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
int n, m, k, cnt;
bool visited[10005];
vector<int> ke[10005];
ii res[10005];
void BFS(int x){
    queue<int> q;
    q.push(x);
    visited[x]=true;
    cnt=0;
    while(q.size()){
        int u=q.front();
        q.pop();
        for(int v : ke[u]){
            if(!visited[v]){
                visited[v]=true;
                cnt++;
                res[cnt]={u, v};
                q.push(v);
            }
        }
    }
    if(cnt==n-1){
        for(int i=1; i<=n-1; i++)   cout << res[i].first << " " << res[i].second << "\n";
    }
    else cout << "-1\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> m >> k;
        memset(visited, false, sizeof visited);
        for(int i=1; i<=n; i++) ke[i].clear();
        for(int i=1; i<=m; i++){
            int x, y;
            cin >> x >> y;
            ke[x].pb(y);
            ke[y].pb(x);
        }
        BFS(k);
    }
}