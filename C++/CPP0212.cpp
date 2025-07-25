#include<bits/stdc++.h>

using namespace std;
const int MOD=1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        int a[n];
        for(int i=n-1; i>=0; i--)  cin >> a[i];
        long long p[n];
        p[0]=1;
        long long ans=a[0];
        for(int i=1; i<n; i++){
            p[i]=(p[i-1]*1ll*x)%MOD;
            ans=(ans+(p[i]*a[i]))%MOD;        
        }
        cout << ans << endl;
    }
}