#include<bits/stdc++.h>

using namespace std;
const int MOD = 1e9+7;
int t, n, a[10000005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a, a+n);
        long long res=0;
        for(int i=0; i<n; i++)  (res+=1ll*a[i]*i)%=MOD;
        cout << res << "\n";
    }
}