#include<bits/stdc++.h>

using namespace std;
int t;
string s;
const int MOD=1e9+7;
long long Pow(long long n, long long k) { 
    if (k == 1) return n % MOD; 
    long long x = Pow(n, k / 2); 
    x = (x * x) % MOD; 
    if (k % 2) return (x * n) % MOD; 
    return x; 
} 
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> s;
        long long a=stoll(s);
        reverse(s.begin(), s.end());
        long long n=stoll(s);
        cout << Pow(a, n) << "\n";
    }
}