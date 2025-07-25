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
int n, a[105][105], degin[105], degout[105],m;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test = 1;
    cin >> test;
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        if(w>0 && w<=50)    a[x][y]=w;
        degin[y]++;
        degout[x]++;
    }
    if(test==1){
        for(int i=1; i<=n; i++) cout << degin[i] << " " << degout[i] << "\n";
    }
    else{
        cout << n << "\n";
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i==j)    cout <<"0 ";
                else if(!a[i][j])   cout << "10000  ";
                else cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
}