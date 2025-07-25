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
int n, m, s;
vector<ii> ke[1005];
void Dijkstra(int u){
    vector<int> d(1005, 1e9);
    d[u]=0;
    priority_queue<ii, vector<ii>, greater<ii>> q;
    q.push({0, u});
    while(q.size()){
        
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> m >> s;
        for(int i=1; i<=m; i++){
            int x, y, w;
            cin >> x >> y >> w;
            ke[x].pb({w, y});
            ke[y].pb({w, x});
        }
        Dijkstra(s);
    }
}