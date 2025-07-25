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
int n, s, a[105][105], pa[105];
vector<int> mst;
vector<ii> ke[105];
void Prim(int s){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    used[s]=1;
    for(auto it : ke[s]){
        q.push({it. first, it.second});
        pa[it.second]=s;
    }
    long long d=0;
    vector<ii> res;
    while(q.size()){
        pair<int, int> tmp = q.top(); q.pop();
        int dinh=tmp.second, trongso=tmp.first;
        if(!used[dinh]){
            d+=trongso;
            used[dinh]=1;
            for(auto it : ke[dinh]){
                q.push({it.first, it.second});
            }
        }
    }
    if(cnt==n-1)  cout << d;
    else cout << "IMPOSSIBLE";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    //cin >> test;
    while(test--){
        cin >> n >> s;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin >> a[i][j];
                if(i==j)    continue;
                ke[i].pb({a[i][j], j});
            }
        }
        Prim(s);
    }
}