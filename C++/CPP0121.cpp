#include<bits/stdc++.h>

using namespace std;
int gcd(int a, int b)
{
    while(b!=0)
    {
        int tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,a,b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        long long lcm=1ll*a*b/gcd(a,b);
        cout << lcm << ' ' << gcd(a,b) << "\n";
    }
}