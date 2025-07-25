// Tich lon nhat
#include<bits/stdc++.h>

using namespace std;
const int MOD=1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0; i<n; i++)  cin >> a[i];
    sort(a.begin(), a.end());
    long long res=0;
    for(int i=0; i<n; i++){
        res=(res+(a[i]*i)%MOD)%MOD;
    }
    cout << res;
}