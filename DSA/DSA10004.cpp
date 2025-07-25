#include<bits/stdc++.h>

using namespace std;
#define maxn 1005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int n, m, d[maxn];
vector<int> ke[maxn];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        for(int i=1; i<=1000; i++) ke[i].clear();
        memset(d, 0 ,sizeof d);
        cin >> n >> m;
        for(int i=1; i<=m; i++){
            int x, y;
            cin >> x >> y;
            d[x]++;
            d[y]++;
            ke[x].pb(y);
            ke[y].pb(x);
        }
        int odd=0;
        for(int i=1; i<=n; i++) odd+=(d[i]%2);
        if(odd==0)  cout << 2;
        else if(odd==2) cout << 1;
        else cout << 0;
        cout << "\n";
    }
}