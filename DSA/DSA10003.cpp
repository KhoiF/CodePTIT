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
int n, m, parent[10005];
void ktao(){
    for(int i=1; i<=n; i++){
        parent[i]=i;
    }
}
int Find(int u){
    if(u==parent[u])    return u;
    return parent[u]=Find(parent[u]);
}
bool Union(int u, int v){
    u = Find(u);
    v = Find(v);
    if(u==v)    return false;
    else return parent[v]=u, true;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> m;
        ktao();
        bool flag=0;
        for(int i=1; i<=m; i++){
            int x, y;
            cin >> x >> y;
            if(!Union(x, y)) flag=1;
        }
        if(flag)    cout << "YES\n";
        else cout << "NO\n";
    }
}