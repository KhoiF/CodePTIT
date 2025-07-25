#include<bits/stdc++.h>

using namespace std;
int t;
long long n;
const int MOD=123456789;
long long Pow(long long a, long long n){
    long long ans=1;
    while(n){
        if(n&1) (ans*=a)%=MOD;
        n=n>>1;
        (a*=a)%=MOD;
    }
    return ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        cout << Pow(2, n-1) << "\n";
    }
}