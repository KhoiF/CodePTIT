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
int n, d[105], a[105][105], cnt;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test = 1;
    cin >> test;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int x;
            cin >> x;
            a[i][j]=(x>=1 && x<=50) ? x : 0;
            if(a[i][j]){
                d[i]++;
                cnt++;
            }
        }
    }
    if(test==1){
        for(int i=1; i<=n; i++) cout << d[i] << " ";
    }
    else{
        cout << n << " " << cnt/2 << "\n";
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                if(a[i][j]) cout << i << " " << j << " " << a[i][j] << "\n";
            }
        }
    }
}

