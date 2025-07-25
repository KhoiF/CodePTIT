#include<bits/stdc++.h>

using namespace std;
const int MOD =1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        long long f[100005]={0};
        f[0]=1;
        for(int i=1; i<=k; i++){
            for(int j=1; j<=i; j++){
                f[i]=(f[i]+f[i-j])%MOD;
            }
        }
        for(int i=k+1; i<=n; i++){
            for(int j=1; j<=k; j++){
                f[i]=(f[i]+f[i-j])%MOD;
            }
        }
        cout << f[n] << "\n";
    }
}