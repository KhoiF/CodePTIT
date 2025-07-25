#include<bits/stdc++.h>

using namespace std;
int t;
long long n, k, f[51];
long long Find(long long n, long long k){
    if(k==f[n]/2+1) return n;
    else if(k<=f[n]/2)  return Find(n-1, k);
    else return Find(n-1, k-f[n]/2-1);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    f[1]=1;
    for(int i=2; i<=50; i++)    f[i]=f[i-1]*2+1;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << Find(n, k) << "\n";
    }
}