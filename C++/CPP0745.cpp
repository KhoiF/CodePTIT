#include<bits/stdc++.h>

using namespace std;
const long long MOD=1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long f[1001];
    f[0]=0;
    f[1]=f[2]=1;
    for(int i =3; i<=1000; i++){
        f[i]=(f[i-1]%MOD+f[i-2]%MOD)%MOD;
    }
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << f[n] << "\n";
    }
}