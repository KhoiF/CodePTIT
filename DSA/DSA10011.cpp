#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<int ,pair<int, int>>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int n, m, a[505][505], d[505][505];
vector<iii> ke[505][505];
void nhap(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++) ke[i][j].clear();
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            d[i][j]=1e9;
            cin >> a[i][j];
            if(i-1>0)   ke[i-1][j].push_back({a[i][j], {i, j}});
            if(j-1>0)   ke[i][j-1].push_back({a[i][j], {i, j}});
            ke[i][j+1].push_back({a[i][j], {i, j}});
            ke[i+1][j].push_back({a[i][j], {i, j}});
        }
    }
}
void Dijkstra(int i, int j){
    d[i][j]=a[i][j];
    priority_queue<iii, vector<iii>, greater<iii>> q;
    q.push({d[i][j], {1, 1}});
    while(q.size()){
        iii tmp=q.top(); q.pop();
        int dis=tmp.first;
        int x=tmp.second.first, y=tmp.second.second;
        if(dis <= d[x][y]){
            d[x][y]=dis;
            for(auto it : ke[x][y]){
                int trongso=it.first;
                int u=it.second.first, v=it.second.second;
                if(d[u][v] > d[x][y]+trongso){
                    d[u][v]=d[x][y]+trongso;
                    q.push({d[u][v], {u, v}});
                }
            }
        }
    }
    cout << d[n][m] << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test=1;
    cin >> test;
    while(test--){
        nhap();
        Dijkstra(1, 1);
    }
}