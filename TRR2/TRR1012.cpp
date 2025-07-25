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
int n, a[105][105], deg_in[105], deg_out[105];
vector<ii> e;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test = 1;
    cin >> test >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]){
                deg_out[i]++;
                deg_in[j]++;
                e.pb({i, j});
            }
        }
    }
    if(test==1){
        for(int i=1; i<=n; i++) cout << deg_in[i] << " " << deg_out[i] << "\n";
    }
    else{
        cout << n << " " << e.size() << "\n";
        for(ii x : e)   cout << x.first << " " << x.second << "\n";
    }
}