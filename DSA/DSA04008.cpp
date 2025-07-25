#include<bits/stdc++.h>

using namespace std;

unordered_map<int, long long> F;
int mod = 1e9 + 7;

long long fibo(int n)
{
    if(n==0)    return 0;
    if(F[n])    return F[n];
    long long k = n >> 1;
    if(n & 1) return F[n] = (fibo(k) * fibo(k) + fibo(k + 1) * fibo(k + 1)) % mod;
    return F[n] = (fibo(k) * fibo(k + 1) + fibo(k - 1) * fibo(k)) % mod;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    F[0] = 0;
    F[1] = 1;
    F[2] = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(!n) cout << 0 << endl;
        else cout << fibo(n) << "\n";
    }
}