#include<bits/stdc++.h>

using namespace std;
const int MOD=1e9+7;
long long c[1005][1005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    for(int i=1; i<=1000; i++){
        c[i][0]=1;
        c[i][i]=1;
    }
    for(int i=2; i<=1000; i++){
        for(int j=1; j<i; j++){
            c[i][j]=(c[i-1][j-1]+c[i-1][j])%MOD;
        }
    }
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << c[n][k] << "\n";
    }
}