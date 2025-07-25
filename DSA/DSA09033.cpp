#include<bits/stdc++.h>

using namespace std;
#define maxn 100005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int n, m, cnt;
bool visited[maxn];
vector<int> ke[maxn];
void DFS(int u){
    visited[u]=true;
    cnt++;
    for(int v : ke[u]){
        if(!visited[v]) DFS(v);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(visited, false, sizeof visited);
        cin >> n >> m;
        for(int i=1; i<=n; i++) ke[i].clear();
        for(int i=1; i<=m; i++){
            int x, y;
            cin >> x >> y;
            ke[x].pb(y);
            ke[y].pb(x);
        }
        int sum=0;
        for(int i=1; i<=n; i++){
            if(!visited[i]){
                cnt=0;
                DFS(i);
                sum+=(cnt-1)*cnt/2;
            }
        }
        if(sum==m)  cout << "YES\n";
        else cout << "NO\n";
    }
}