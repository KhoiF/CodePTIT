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
int n, pa[1005], cnt;
vector<int> ke[1005];
vector<int> res[1005];
void DFS(int u){
    if(ke[u].size()==0){
        ++cnt;
        for(int i=u; i; i=pa[i])    res[cnt].pb(i);
        reverse(res[cnt].begin(), res[cnt].end());
        return;
    }
    for(int v : ke[u]){
        DFS(v);
    }
}
bool cmp(vector<int> a, vector<int> b){
    return a.back() < b.back();
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(pa, 0, sizeof pa);
        for(int i=1; i<=n; i++){
            ke[i].clear();
            res[i].clear();
        }
        cnt=0;
        cin >> n;
        for(int i=1; i<n; i++){
            int u, v;
            cin >> u >> v;
            pa[v]=u;
            ke[u].pb(v);
        }
        DFS(1);
        sort(res+1, res+1+cnt, cmp);
        for(int i=1; i<=cnt; i++){
            for(int x : res[i]) cout << x << " ";
            cout << "\n";
        }
    }
}