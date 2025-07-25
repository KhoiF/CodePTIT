#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    long long s;
    cin >> t;
    while(t--)
    {
        cin >> n;
        s=1ll*(n+1)*n/2;
        cout << s << endl;
    }
}