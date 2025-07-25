#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long f[93];
    f[0]=0;
    f[1]=f[2]=1;
    for(int i=3; i<=92; i++)    f[i]=f[i-1]+f[i-2];
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << f[n] << "\n";
    }
}