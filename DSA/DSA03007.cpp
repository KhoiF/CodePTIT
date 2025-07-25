#include<bits/stdc++.h>

using namespace std;
int t, n;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        long long a[n], b[n];
        for(long long &i : a) cin >> i;
        for(long long &i : b)  cin >> i;
        sort(a, a+n);
        sort(b, b+n);
        long long res=0;
        for(int i=0; i<n; i++)  res+=a[i]*b[n-1-i];
        long long sum=0;
        for(int i=0; i<n; i++)  sum+=b[i]*a[n-1-i];
        res=max(res, sum);
        cout << res << "\n";
    }
}