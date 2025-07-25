#include<bits/stdc++.h>

using namespace std;
const int MOD=1e9+7;
long long gcd(long long a, long long b){
    long long tmp;
    while(b!=0){
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}
long long Mul(long long n, long long k){
    if(k==0)    return 1;
    long long tmp=Mul(n, k/2);
    if(k%2==0)  return (tmp*tmp)%MOD;
    else return ((tmp*tmp)%MOD*n)%MOD;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        long long h=1;
        for(int i=0; i<n; i++){
            cin >> a[i];
            h*=1ll*a[i];
            h=h%MOD;
        }
        long long g=a[0];
        for(int i=1; i<n; i++)  g=gcd(g, 1ll*a[i]);
        cout << Mul(h, g) << "\n";
    }
}