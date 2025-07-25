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
int n, f[200005];
vector<int> ke[200005];
void DFS(int u){
    for(int v : ke[u]){
        DFS(v);
        f[u]+=(f[v]+1);
    }
    f[u]++;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    //cin >> test;
    while(test--){
        cin >> n;
        for(int i=2; i<=n; i++){
            int x;
            cin >> x;
            ke[x].pb(i);
        }
        DFS(1);
        for(int i=1; i<=n; i++) cout << f[i] << " ";
    }
}