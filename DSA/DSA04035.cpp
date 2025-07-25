#include<bits/stdc++.h>

using namespace std;
const int MOD = 1e9+7;
long long n, k;
long long Pow(long long a, long long k){
    long long ans=1;
    while(k){
        if(k&1) ans=ans*a%MOD;
        k=(k>>1);
        (a*=a)%=MOD;
    }
    return ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    while(cin >> n >> k){
        if(!n && !k)    return 0;
        cout << Pow(n, k) << "\n";
    }
}