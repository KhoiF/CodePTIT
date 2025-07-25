#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long s[21];
    s[1]=1;
    for(int i=2; i<=20; i++)    s[i]=s[i-1]*i;
    int n;
    cin >> n;
    long long ans=0;
    for(int i=1; i<=n; i++) ans+=s[i];
    cout << ans;
}