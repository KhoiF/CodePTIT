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
int n, degin[105], degout[105], a[105][105], m;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test = 1;
    cin >> test;
    cin >> n;
    for(int i=1; i<=n; i++){
        int cnt;
        cin >> cnt;
        degout[i]=cnt;
        while(cnt--){
            m++;
            int x;
            cin >> x;
            degin[x]++;
            a[i][m]=1;
            a[x][m]=-1;
        }
    }   
    if(test==1){
        for(int i=1; i<=n; i++) cout << degin[i] << " " << degout[i] << "\n";
    }
    else{
        cout << n << " " << m << "\n";
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++) cout << a[i][j] << " ";
            cout << "\n";
        }
    }
}