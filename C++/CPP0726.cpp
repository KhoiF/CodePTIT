#include<bits/stdc++.h>

using namespace std;
long long mul(long long a, long long b, long long k)
{
    if(b==0) return 0;
    if(b==1) return a;
    long long tmp=mul(a,b/2,k);
    if(b%2)
        return ((tmp+tmp)%k+a)%k;
    return (tmp%k+tmp%k)%k;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;
        cout << mul(a, b, c) << "\n";
    }
}