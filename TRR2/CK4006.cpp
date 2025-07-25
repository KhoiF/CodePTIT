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
int n, a[105][105], pa[105];
struct edge{
    int x, y, w;
};
vector<edge> E, mst;
bool cmp(edge a, edge b){
    return a.w < b.w;
}
void init(){
    for(int i=1; i<=n; i++) pa[i]=i;
}
int Find(int u){
    return u==pa[u] ? u : pa[u]=Find(pa[u]);
}
bool Union(int u, int v){
    u=Find(u);
    v=Find(v);
    if(u==v)    return false;
    else return pa[v]=u, true;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("CK.in", "r", stdin);
    freopen("CK.out", "w", stdout);
    int test = 1;
    //cin >> test;
    while(test--){
        cin >> n;
        init();
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin >> a[i][j];
                if(j>i && a[i][j]>0 && a[i][j]<=50) E.pb({i, j, a[i][j]});
            }
        }
        sort(E.begin(), E.end(), cmp);
        int d=0;
        for(auto a : E){
            if(Union(a.x, a.y)){
                d+=a.w;
                mst.pb(a);
            }
        }
        if(mst.size()!=n-1) cout << 0;
        else{
            cout << d << "\n";
            for(auto a : mst){
                cout << a.x << " " << a.y << " " << a.w << "\n";
            }
        }
    }
}